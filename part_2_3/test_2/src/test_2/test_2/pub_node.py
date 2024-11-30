import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time

class Pub(Node):
    def __init__(self):
        super().__init__('pub')
        self.publisher_ = self.create_publisher(String, 'counterinfo', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.counter = 0
        self.clear_count = 0

    def timer_callback(self):
        msg = String()
        current_time = time.strftime("%Y-%m-%d %H:%M:%S", time.localtime())
        msg.data = f"Counter: {self.counter}, Time: {current_time}"
        self.publisher_.publish(msg)
        self.counter += 1
        if self.counter >= 100:
            self.counter = 0
            self.clear_count += 1
        self.get_logger().info('Publishing: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    pub = Pub()

    rclpy.spin(pub)

    pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()