# run the ROS master
```shell
$ roscore
```
![Screenshot from 2020-09-04 23-18-34](https://user-images.githubusercontent.com/69444682/92262327-27cf6680-ef05-11ea-89f0-914e2d45a840.png)

# NEW TERMINAL:
### command ROS to list all the notes
```shell
$ rosnode list
$ ls | grep roscore
$ ls
```

![Screenshot from 2020-09-04 23-18-25](https://user-images.githubusercontent.com/69444682/92262325-269e3980-ef05-11ea-81c5-b359907c32c7.png)

```shell
$ rosrun turtlesim turtlesim_node
```

![Screenshot from 2020-09-04 23-18-42](https://user-images.githubusercontent.com/69444682/92262333-29009380-ef05-11ea-8af9-256fc7b7f491.png)
![Screenshot from 2020-09-04 23-27-22](https://user-images.githubusercontent.com/69444682/92263053-3702e400-ef06-11ea-945e-04a8f4737c3f.png)

```shell
$ rosnode list
$ rosnode
```

![Screenshot from 2020-09-04 23-18-59](https://user-images.githubusercontent.com/69444682/92262337-2a31c080-ef05-11ea-81a2-0e784ecc0195.png)


```shell
$ rosnode info /rosout
```

![Screenshot from 2020-09-04 23-29-09](https://user-images.githubusercontent.com/69444682/92263225-77faf880-ef06-11ea-9f02-01c75f2ebc26.png)

```shell
$ rosnode info /turtlesim
```

![Screenshot from 2020-09-04 23-31-42](https://user-images.githubusercontent.com/69444682/92263408-ce683700-ef06-11ea-8476-287ebef5b039.png)

```shell
$ rosnode ping /turtlesim
```

![Screenshot from 2020-09-04 23-33-52](https://user-images.githubusercontent.com/69444682/92263916-97deec00-ef07-11ea-9d2e-14195ff5e7a8.png)

```shell
$ rosrun turtlesim turtlesim_node __name:=twoDWall
```

![Screenshot from 2020-09-04 23-38-23](https://user-images.githubusercontent.com/69444682/92264018-c230a980-ef07-11ea-9972-f330e2f9f974.png)




