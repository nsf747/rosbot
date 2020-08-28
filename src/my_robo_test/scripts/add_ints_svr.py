#!/usr/bin/env python3

import rospy	
from rospy_tutorials.srv import AddTwoInts

def handle_two_ints(req):
    result=req.a + req.b
    rospy.loginfo("Sum of " + str(req.a) + "and" + str(req.b) + "is" + str(result))
    return result


if __name__ == '__main__':
    rospy.init_node("add_2_int_svr")
    rospy.loginfo("Add two ints server node created")
    service = rospy.Service("/add_two_ints", AddTwoInts, handle_two_ints)
    rospy.loginfo("Add two ints server has started")
    rospy.spin()
    