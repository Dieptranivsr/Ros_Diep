
```shell
$ cd Documents/diep-ws/src/robot_tutorials/
$ ls
$ mkdir scripts
$ cd scripts
$ vim wallE.py
```
![Screenshot from 2020-09-05 11-42-53](https://user-images.githubusercontent.com/69444682/92297779-f5595400-ef6c-11ea-9602-c8c537fa5260.png)

```python
import rospy
from std_msgs.msg import String, Int8

def wallE_talker():
    hello_pub = rospy.Publisher('Hello', String, queue_size = 10)
    rospy.init_node('wallE', anonymous = True)
    rate = rospy.Rate(10)
    while not rospy.is_shutdown():
        greeting = "Hello, Every Body!"
        rospy.loginfo(greeting)
        hello_pub.publish(greeting)
        rate.sleep()

if __name__ == '__main__':
    try:
        wallE_talker()
    except rospy.ROSInterruptException:
        pass
```

in the new terminal
```shell
$ roscore
$ cd Documents/diep_ws/src/robot_tutorials/scripts/
$ python wallE.py
```
![Screenshot from 2020-09-05 14-50-43](https://user-images.githubusercontent.com/69444682/92301047-56dbeb80-ef8a-11ea-844d-da1bce0fca74.png)
