import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Sub(Node):
    def __init__(self):
        super().__init__('sub')
        self.subscription = self.create_subscription(
            String,
            'counterinfo',
            self.listener_callback,
            10)
        self.subscription                               # 防止未使用变量警告prevent unused variable warning
        self.clear_count = 0

    def listener_callback(self, msg):
        parts = msg.data.split(', ')
        counter = int(parts[0].split(': ')[1])
        time = parts[1].split(': ')[1]
        if counter == 0:
            self.clear_count += 1
            self.get_logger().info(f"嘿!我已经被被清空 {self.clear_count} 次了!")
        else:
            self.get_logger().info(f"Time: {time}, Counter: {counter}")


def main(args=None):
    rclpy.init(args=args)

    sub = Sub()

    rclpy.spin(sub)

    sub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()