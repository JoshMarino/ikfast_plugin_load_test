cmake_minimum_required(VERSION 2.8.3)
project(ikfast_plugin_load_test)


find_package(catkin REQUIRED COMPONENTS
  pluginlib
  roscpp
)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(IKFast_leg_LF_loader src/IKFast_leg_LF_loader.cpp)
target_link_libraries(IKFast_leg_LF_loader ${catkin_LIBRARIES})
