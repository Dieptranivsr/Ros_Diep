
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
 



