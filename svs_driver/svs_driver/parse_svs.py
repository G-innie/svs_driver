import rclpy
from rclpy.node import Node
from svs_interfaces.msg import SVS
import rclpy.time
from std_msgs.msg import String

class SVSDecoder(Node):

    def __init__(self):
        super().__init__('svs_driver')

        self.declare_parameter("input_topic", "turbidity_raw")
        self.input_topic = self.get_parameter("input_topic").get_parameter_value().string_value

        self.declare_parameter("output_topic", "turbidity_parsed")
        self.output_topic = self.get_parameter("output_topic").get_parameter_value().string_value

        self.get_logger().info("Starting svs driver node to decode raw SVS data")
        self.publisher = self.create_publisher(SVS, self.output_topic, 10)
        self.subscriber = self.create_subscription(
            String,
            self.input_topic,
            self.listener_callback,
            10
        )

    def listener_callback(self, msg):
        self.get_logger().info(f"Received message: {msg.data}")
        msg = msg.data.strip('\r\n').split(',')
        if len(msg) != 1:
            self.get_logger().error(f"Invalid message format. Length should be 1, got {len(msg)}")
            return
        svs_msg = SVS()
        svs_msg.time = self.get_clock().now().to_msg()
        svs_msg.svs = float(msg[0])
   
        self.get_logger().info(f"Publishing message: {svs_msg}")
        self.publisher.publish(svs_msg)

def main(args=None):
    rclpy.init(args=args)
    # TODO: Parse in/out topic from config file or launch file
    node = SVSDecoder()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()