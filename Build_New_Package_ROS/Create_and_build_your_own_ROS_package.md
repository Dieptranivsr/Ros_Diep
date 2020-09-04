
```shell
$ cd Documents/
$ mkdir build-system
$ cd build-system
```
exp:

```shell
$ nano hello-diep.cpp
```
in ths file, write
```c++
#include<iostream>

int main()
{
   std::cout<<"Diep_ws: Hello Everybody\n";
   return 0;
}           
```

```shell
$ g++ hello-diep.cpp -o hello-diep
$ ls
```
    
result:

    hello-diep   hello-diep.cpp
next:
    
    
```shell
$ rm -rf hello-diep
$ vim Makefile
```

in ths file, write

```Makefile
CC      = g++
CFLAGS  = -g
RM      = rm -f

default: all

all: hello-diep

hello-diep: hello-diep.cpp
        $(CC) $(CFLAGS) -o hello-diep hello-diep.cpp

clean:
        $(RM) hello-diep
```

```shell
$ make
```
result:

    g++ -g -o hello-diep hello-diep.cpp

next: 
```shell
$ make clean
$ mkdir build
$ cd build/
$ cmake ..
```
```
CMakeCache.txt  CMakeFiles  cmake_install.cmake  Makefile
```

```shell
$ make -j8
```
```
CMakeCache.txt  CMakeFiles  cmake_install.cmake  HelloDiep  Makefile
```

![Screenshot from 2020-09-03 16-43-23](https://user-images.githubusercontent.com/69444682/92099430-b01a1280-ee04-11ea-9819-3aa6aca069b1.png)


test file:
```shell
$ ./HelloDiep
```
```
Diep_ws: Hello Everybody
```

```shell
$ cd ~/Document/diep_ws
$ ls src/
```
```
CMakeLists.txt   robot-tutorials
```
```shell
$ mkdir build
$ cd build
$ cmake ../src/
```

![Screenshot from 2020-09-04 21-42-32](https://user-images.githubusercontent.com/69444682/92251858-a3c2b200-eef7-11ea-8638-b4a4432a9e22.png)

