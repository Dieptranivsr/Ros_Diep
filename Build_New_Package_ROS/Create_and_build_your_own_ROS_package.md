
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
$ make
```

![Screenshot from 2020-09-04 21-44-34](https://user-images.githubusercontent.com/69444682/92251998-d7054100-eef7-11ea-90c9-20f6a8a8e5ef.png)

```shell
$ cd ..
$ rm -rf build/
$ mkdir build
$ cd build
$ cmake ../src/ - DCMAKE_INSTALL_PREFIX=../install -DCATKIN_DEVEL_PREFIX=../devel
```

![Screenshot from 2020-09-04 21-49-21](https://user-images.githubusercontent.com/69444682/92252496-83472780-eef8-11ea-8795-b827ebfbba15.png)

```shell
$ make
```

