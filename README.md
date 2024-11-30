# -代码结构说明
part_1

包含test_1_1.py和test_1_2.py分别对应

part_2_3

包含一个工作空间test_2（Ubuntu22.04, ROS2 humble, WSL）

其中包含三个功能包 test_2, test_2_interfaces（存放srv、msg等）, rviz_plugin_tutorials


##下面分别介绍三个功能包

1. test_2

   
包含四个节点，其中pub, sub对应试题2.1; ser, cli对应试题2.2

2. test_2_interfaces
   

存放srv、msg等

3. rviz_plugin_tutorials(由于该题用到part2中的.srv，为了方便，因此建立在同一个工作空间中)
   
   
创建了my_rviz_panel.cpp 和 my_rviz_panel.hpp

编译后在rivz2中，创建插件rviz_plugin_tutorials/MyRvizPanel

# -操作步骤

# -第一部分 


###试题1.1

在part_1目录下执行

```
python test_1_1.py
```

###试题 1.2

```
python test_1_2.py
```

# -第二部分 


###试题2.1

下载

```
git clone https://github.com/MissChengrj/-_-.git
```

编译

```
cd -_-/part_2_3/test_2

colcon build
```

```
source install/setup.bush
```

启动节点pub, sub

```
ros2 run test_2 pub

ros2 run test_2 sub
```

完成

###试题2.2

启动节点ser, cli

```
ros2 run test_2 ser

ros2 run test_2 cli
```

根据提示输入信息

完成

# -第三部分


启动节点ser

```
ros2 run test_2 ser
```

加载插件

```
ros2 run rviz2 rviz2
```

依次点击Panels->Add New Panels->rviz_plugin_tutorials->MyRvizPanel

出现插件

在Qt界面A, B, C中输入数字，Operation可选"sum", "product"（有点小BUG没来得及改）

可在ser节点的terminal中观察到结果

完成




