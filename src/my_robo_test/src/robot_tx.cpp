#include <ros/ros.h>
#include <std_msgs/String.h>

int main (int argc, char **argv)
{
	ros::init(argc, argv, "robot_radio_tx");
	ros::NodeHandle nh;
	
	ros:: Publisher pub =nh.advertise<std_msgs::String>("/robot_radio",10);
	
	ros::Rate rate(3);
	
	while (ros::ok())
	{
		std_msgs::String msg;
		msg.data = "hi this is bla bla bla from cpp";
		pub.publish(msg);
		rate.sleep();
	}
}
