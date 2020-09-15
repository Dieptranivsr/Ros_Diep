
### Introduction to msg and srv
 * msg: msg files are simple text files that describe the fields of a ROS message. 
        They are used to generate source code for messages in different languages.
 * srv: an srv file describes a service. It is composed of two parts: a request and a response.
msg files are stored in the msg directory of a package, and srv files are stored in the srv directory.

msgs are just simple text files with a field type and field name per line. The field types you can use are:
 * int8, int16, int32, int64 (plus uint*)
 * float32, float64
 * string
 * time, duration
 * other msg files
 * variable-length array[] and fixed-length array[C]
 
There is also a special type in ROS: 
Header, the header contains a timestamp and coordinate frame information that are commonly used in ROS. 
You will frequently see the first line in a msg file have Header header.

### Using msg
```shell
$ roscd beginner_tutorials
$ mkdir msg
$ echo "int64 num" > msg/Num.msg
```
There's one more step, though. We need to make sure that the msg files are turned into source code for C++, Python, and other languages:
Open package.xml, and make sure these two lines are in it and uncommented:
```xml
  <build_depend>message_generation</build_depend>
  <exec_depend>message_runtime</exec_depend>
```
Note that at build time, we need "message_generation", while at runtime, we only need "message_runtime".
Open CMakeLists.txt in your favorite text editor (rosed from the previous tutorial is a good option).
Add the message_generation dependency to the find_package call which already exists in your CMakeLists.txt so that you can generate messages. You can do this by simply adding message_generation to the list of COMPONENTS such that it looks like this:
```txt
# Do not just add this to your CMakeLists.txt, 
modify the existing text to add message_generation before the closing parenthesis
find_package(catkin REQUIRED COMPONENTS
   roscpp
   rospy
   std_msgs
   message_generation
)
```
Also make sure you export the message runtime dependency.
```txt
catkin_package(
  ...
  CATKIN_DEPENDS message_runtime ...
  ...)
```
Uncomment this block of code and fix: 
```txt
add_message_files(
  FILES
  Num.msg
)
```
```txt
generate_messages(
  DEPENDENCIES
  std_msgs
)
```

### Using rosmsg

``` shell
$ rosmsg show [message type]
$ rosmsg show beginner_tutorials/Num
   int64 num
$ rosmsg show Num
   [beginner_tutorials/Num]:
   int64 num
```

### Using srv
Let's use the package we just created to create a srv:

```shell
$ roscd beginner_tutorials
$ mkdir srv
```

Now we can copy a service from the rospy_tutorials package:
```shell
$ roscp [package_name] [file_to_copy_path] [copy_path]
$ roscp rospy_tutorials AddTwoInts.srv srv/AddTwoInts.srv
```
There's one more step, though. We need to make sure that the srv files are turned into source code 
for C++, Python, and other languages.
Unless you have done so already, open package.xml, and make sure these two lines are in it and uncommented:
```xml
  <build_depend>message_generation</build_depend>
  <exec_depend>message_runtime</exec_depend>
```
As before, note that at build time, we need "message_generation", 
while at runtime, we only need "message_runtime".

Unless you have done so already for messages in the previous step, 
add the message_generation dependency to generate messages in CMakeLists.txt:

```txt
# Do not just add this line to your CMakeLists.txt, modify the existing line
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)
```
And replace the placeholder Service*.srv files for your service files:
```txt
add_service_files(
  FILES
  AddTwoInts.srv
)
```

### Using rossrv
That's all you need to do to create a srv. Let's make sure that ROS can see it using the rossrv show command.

```shell
$ rossrv show <service type>
$ rossrv show beginner_tutorials/AddTwoInts
  int64 a
  int64 b
  ---
  int64 sum
```

```shell
$ rossrv show AddTwoInts
[beginner_tutorials/AddTwoInts]:
int64 a
int64 b
---
int64 sum

[rospy_tutorials/AddTwoInts]:
int64 a
int64 b
---
int64 sum
```

### Common step for msg and srv

Uncomment it and add any packages you depend on which contain .msg files that your messages use (in this case std_msgs), such that it looks like this:

```txt
generate_messages(
  DEPENDENCIES
  std_msgs
)
```
Now that we have made some new messages we need to make our package again:
```shell
# In your catkin workspace
$ roscd beginner_tutorials
$ cd ../..
$ catkin_make install
$ cd -
```

### Review
Let's just list some of the commands we've used so far:
 * rospack = ros+pack(age) : provides information related to ROS packages
 * roscd = ros+cd : changes directory to a ROS package or stack
 * rosls = ros+ls : lists files in a ROS package
 * roscp = ros+cp : copies files from/to a ROS package
 * rosmsg = ros+msg : provides information related to ROS message definitions
 * rossrv = ros+srv : provides information related to ROS service definitions
 * catkin_make : makes (compiles) a ROS package
   * rosmake = ros+make : makes (compiles) a ROS package (if you're not using a catkin workspace)





