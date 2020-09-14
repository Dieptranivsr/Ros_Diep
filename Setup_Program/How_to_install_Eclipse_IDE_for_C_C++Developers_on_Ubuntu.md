# Eclipse IDE for C/C++ Developers installation on Ubuntu 18.04.5 LTS step by step instructions
### Step 1. Eclipse IDE requires Java JRE as a prerequisite. Therefore, our first step is to install default-jre package. To do so run the bellow command:

```shell
$ sudo apt install default-jre
```
![image](https://user-images.githubusercontent.com/69444682/93095604-84810d00-f6cd-11ea-9a99-a159048937b5.png)
Installation of Eclipse java prerequisite

Furthermore, confirm that your system has G++ the C++ compilers installed.

### Step 2.
![image](https://user-images.githubusercontent.com/69444682/93095768-bc885000-f6cd-11ea-9c7c-68ba3127d487.png)
Navigate to the official Eclipse website and download the 64-bit Eclipse IDE for C/C++ Developers package.

### Step 3. Extract the Eclipse package downloaded in the previous step. Here we assume that the package has been downloaded into the Downloads directory.

Extract the package into the /opt directory:

```shell
$ sudo tar xf eclipse-cpp-2019-12-R-linux-gtk-x86_64.tar.gz -C /opt
```
Once the package has been extracted create a symbolic link to the /opt/eclipse/eclipse executable binary:

```shell
$ sudo ln -s /opt/eclipse/eclipse /usr/local/bin/
```
![image](https://user-images.githubusercontent.com/69444682/93096016-0cffad80-f6ce-11ea-86d8-e28eac065a28.png)
Extract Eclipse IDE package and link to executable binary

From now on you should be able to start the Eclipse IDE simply by execution of the bellow command:

```shell
$ eclipse
```
![image](https://user-images.githubusercontent.com/69444682/93096085-26a0f500-f6ce-11ea-9f8d-50d6d38a487e.png)

### Step 4. (optional) Create Eclipse IDE for C/C++ Developers desktop launcher. As an administrator create a new file called /usr/share/applications/eclipse.desktop using any text editor eg. nano:

```shell
$ sudo nano /usr/share/applications/eclipse.desktop
```
and insert the following code:

```txt
[Desktop Entry]
Version = 2019‑12
Type = Application
Terminal = false
Name = Eclipse C/C++
Exec = /usr/local/bin/eclipse
Icon = /opt/eclipse/icon.xpm
Categories = Application;
```
![image](https://user-images.githubusercontent.com/69444682/93096287-6962cd00-f6ce-11ea-947c-b806ce40e0d3.png)
Creating Eclipse IDE desktop launcher

![image](https://user-images.githubusercontent.com/69444682/93096333-7384cb80-f6ce-11ea-8260-ad46c4a87394.png)
Once the Eclipse IDE desktop launcher is ready you can start the the Eclipse IDE by searching the top left Activities menu.

### Step 5
![image](https://user-images.githubusercontent.com/69444682/93096397-87c8c880-f6ce-11ea-964f-af33d138a6cf.png)
Once you start the Eclipse IDE for C/C++ Developers application select your work space.

![image](https://user-images.githubusercontent.com/69444682/93096432-944d2100-f6ce-11ea-8bea-75de5cbca752.png)
Navigate to File-->New-->C/C++ Project to create a new C/C++ project.





