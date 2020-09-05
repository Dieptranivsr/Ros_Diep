
```shell
$ cd ~/Documents/diep_ws/src/robot_tutorials/scripts
$ vim Eva.py
```

```python
import rospy
from std_msgs.msg import String

def callback_str(data):
    rospy.loginfo(data.data)

def Eva_listener():
    rospy.init_node('Eva', anonymous = False)
    rospy.Subscriber('Hello', String, callback_str)
    rospy.spin()

if __name__ == '__main__':
    Eva_listener()
```
```shell
$ chmod +x Eva.py
$ roscore
$ python Eva.py
```
```shell
$ cd ~/Documents/diep_ws/src/robot_tutorials/scripts
$ python Eva.py
$ rosrun rqt_graph rqt_graph
```
![Screenshot from 2020-09-05 16-17-34](https://user-images.githubusercontent.com/69444682/92302471-9c061a80-ef96-11ea-9581-5d8e2b50ea5c.png)
![Screenshot from 2020-09-05 16-22-24](https://user-images.githubusercontent.com/69444682/92302497-d8d21180-ef96-11ea-990b-a8a77c2e86cd.png)


```python
#!/usr/bin/env python 
import rospy
from std_msgs.msg import String, Int8

def callback_str(data):
    rospy.loginfo(data.data)

def callback_int(data):
    rospy.loginfo(str(data.data))

def Eva_listener():
    rospy.init_node('Eva', anonymous = False)
    rospy.Subscriber('Hello', String, callback_str)
    rospy.Subscriber('Hello_int', Int8, callback_int)
    rospy.spin()

if __name__ == '__main__':
    Eva_listener()

```
