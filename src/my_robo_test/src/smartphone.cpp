#include <ros/ros.h>
#include <std_msgs/String.h>

void callback_rec(const std_msgs::String& msg)
{
	ROS_INFO("Message received: %s", msg.data.c_str());
}

int main (int argc, char **argv)
{
	ros::init(argc, argv, "Smartphone");
	ros::NodeHandle nh;
	
	ros::Subscriber sub=nh.subscribe("/robot_radio", 1000, callback_rec);
	
	ros::spin();
}
