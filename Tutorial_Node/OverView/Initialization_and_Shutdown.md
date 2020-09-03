------------------------------------------------------------
# Initialization        :airplane:   :airplane:   :airplane:
------------------------------------------------------------
### 1. Initializing the roscpp Node
    sudo apt install python-catkin-tools ros-kinetic-mavlink ros-kinetic-geographic-msgs ros-kinetic-octomap-ros libgeographic-dev geographiclib-tools ros-kinetic-control-toolbox libpopt-dev
    cd ~/catkin_ws/src
    git clone https://github.com/OctoMap/octomap_mapping.git
    git clone https://github.com/mavlink/mavros.git
    cd ..
    catkin build
    source ~/catkin_ws/devel/setup.bash
 
