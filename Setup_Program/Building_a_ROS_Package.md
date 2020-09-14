
# Building Packages

### Building Your Package
```shell
$ cd ~/<...>/ros_ws/
$ rm -rf build
$ cd build
$ cmake ../src/ -DCMAKE_INSTALL_PREFIX=../install -DCATKIN_DEVEL_PREFIX=../devel
```
![Screenshot from 2020-09-15 01-35-59](https://user-images.githubusercontent.com/69444682/93124502-dfc5f600-f6f3-11ea-9d61-93cdfb67a878.png)

```shell
$ make
$ cd ..
$ rm -rf build/ devel/
```
![Screenshot from 2020-09-15 01-40-52](https://user-images.githubusercontent.com/69444682/93124879-83170b00-f6f4-11ea-8779-778c8cc289eb.png)









