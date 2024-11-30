import rclpy
from rclpy.node import Node
from test_2_interfaces.srv import Num # 根据实际包名修改


class Cli(Node):
    def __init__(self):
        super().__init__('cli')
        self.cli = self.create_client(Num, 'add_multiply_service')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Num.Request()


    def send_request(self, num1, num2, num3, operation):
        self.req.a = num1
        self.req.b = num2
        self.req.c = num3
        self.req.operation = operation
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)
    cli = Cli()
    result = None
    
    operation = input("选择操作（求和：sum，求积：product）: ")                         #接收操作指令（输入非sum product 报错）
    if operation == 'sum' or operation == 'product':
        num_list = list(map(float, input("输入三个数值（以空格为分隔符）: ").split()))     #接收输入数据
        if len(num_list) == 3:
            result = cli.send_request(num_list[0], num_list[1], num_list[2], operation)
        else:
            cli.get_logger().error("输入数量过多（少）！请输入3个数字")
    else:
        cli.get_logger().error('无效的操作，请选择"sum"或"product"')

    if result is not None:
        cli.get_logger().info('结果: {}'.format(result.result))

    cli.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()