#!/usr/bin/env python

import rospy

if __name__ == "__main__":
	rospy.init_node('my_first_python_node')
	rospy.loginfo("this node has been started")
	
	rate = rospy.Rate(1)
	
	while not rospy.is_shutdown():
		rospy.loginfo("Hello")
		rate.sleep()
	

