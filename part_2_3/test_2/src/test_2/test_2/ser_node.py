import rclpy
from rclpy.node import Node
from test_2_interfaces.srv import Num # 根据实际包名修改

class Calculate:                                    #定义Calculate类，包含方法sum_num,product_num分别用于计算输入list的和，积
    def sum_num(self, num_list):
        result = 0
        for num in num_list:
            result += num
        return result

    def product_num(self, num_list):
        result = 1
        for num in num_list:
            result *= num
        return result

class Ser(Node):
    def __init__(self):
        super().__init__('ser')
        self.srv = self.create_service(Num, 'add_multiply_service', self.add_multiply_callback)
        self.get_logger().info("节点已启动：ser!" )


    def add_multiply_callback(self, request, response):
        #读取输入
        num1 = request.a
        num2 = request.b
        num3 = request.c
        operation = request.operation

        num_list = [num1, num2, num3]

        calcul_obj = Calculate()                                        #创建一个对象
        
        if operation == 'sum':
            self.get_logger().info(f"收到请求，计算{num1} + {num2} + {num3}")
            response.result = calcul_obj.sum_num(num_list)
            print("求和结果：", response.result)
        elif operation == 'product':
            self.get_logger().info(f"收到请求，计算{num1} * {num2} * {num3}")
            response.result = calcul_obj.product_num(num_list)
            print("求积结果：", response.result)
        else:
            self.get_logger().error('无效的请求')
        return response

def main(args=None):
    rclpy.init(args=args)
    ser = Ser()
    rclpy.spin(ser)
    ser.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()