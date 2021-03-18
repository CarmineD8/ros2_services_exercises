# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


##Import ROS modules
#
#
##Import ROS Messages and Services
#
#
#
#

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        
        # initialize the client1
        # initialize self.req1
        
        # initialize the client2
        # initialize self.req2
        
        #initialize publisher and subscriber
        #
        #
        
        while not self.cli1.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        
        while not self.cli2.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        
        
    def send_request(self):
        # set req1
        # call service 1
        
    def send_request2(self):
        # set req2
        # call service2
        
    #publish a velocity message when something is received
    def listener_callback(self, msg):
       


def main(args=None):
    #init the node

    minimal_subscriber = MinimalSubscriber()
    #call services 1 and 2
    #
    
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
