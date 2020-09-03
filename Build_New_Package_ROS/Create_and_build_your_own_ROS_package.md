
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


