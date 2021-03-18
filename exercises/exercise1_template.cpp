// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>
#include <chrono>
#include <cinttypes>

//add the ROS header

/*add the headers for messages and services


*/

using std::placeholders::_1;

class MyController : public rclcpp::Node
{
public:
  MyController()
  : Node("my_controller")
  { 
    /*initialize the publisher, the subscriber, client1, client2
   
      
      
    */  
    while (!client1_->wait_for_service(std::chrono::seconds(1))) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(this->get_logger(), "client interrupted while waiting for service to appear.");
      return;
    }
    RCLCPP_INFO(this->get_logger(), "waiting for service to appear...");
    }
    while (!client2_->wait_for_service(std::chrono::seconds(1))) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(this->get_logger(), "client interrupted while waiting for service to appear.");
      return;
    }
    RCLCPP_INFO(this->get_logger(), "waiting for service to appear...");
    }
    
  }

  //function to call the kill service
  void call_client1(){
  
  }
  
  //function to call the spawn service
  void call_client2(){
  
  }

private:

  //get the robot's position and set the velocity
  void topic_callback(const turtlesim::msg::Pose::SharedPtr msg) const
  {
    
  }
  
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::Client<turtlesim::srv::Kill>::SharedPtr client1_;
  rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr client2_;
};

int main(int argc, char * argv[])
{
  /* init
  */
  auto node = std::make_shared<MyController>();
  /*call service 1 and 2
  
  */
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
