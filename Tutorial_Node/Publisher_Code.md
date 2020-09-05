
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

in the new terminal
```shell
$ rosnode list
```
![Screenshot from 2020-09-05 11-55-14](https://user-images.githubusercontent.com/69444682/92301590-36626000-ef8f-11ea-8775-d9a87b2fc019.png)
fix code
```python
import rospy
from std_msgs.msg import String, Int8

def wallE_talker():
    hello_pub = rospy.Publisher('Hello', String, queue_size = 10)
    hello_pub_int = rospy.Publisher('Hello_int', Int8, queue_size = 10)
    rospy.init_node('wallE', anonymous = False)
    rate = rospy.Rate(10)
    counter = 0
    while not rospy.is_shutdown():
        greeting = "Hello, Every Body!"
        greeting_int = ord(greeting[counter%len(greeting)])
        rospy.loginfo(greeting)
        hello_pub.publish(greeting)
        hello_pub_int.publish(greeting_int)
        counter += 1
        rate.sleep()

if __name__ == '__main__':
    try:
        wallE_talker()
    except rospy.ROSInterruptException:
        pass
```

![Screenshot from 2020-09-05 11-56-42](https://user-images.githubusercontent.com/69444682/92301066-8b4fa780-ef8a-11ea-9af6-54f54050b734.png)
![Screenshot from 2020-09-05 11-57-15](https://user-images.githubusercontent.com/69444682/92301071-986c9680-ef8a-11ea-9386-870cd6391bcc.png)
