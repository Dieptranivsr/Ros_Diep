
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
$ make clear
```

    rm -rf hello-diep

![Screenshot from 2020-09-03 16-43-23](https://user-images.githubusercontent.com/69444682/92099430-b01a1280-ee04-11ea-9819-3aa6aca069b1.png)
