#include <pluginlib/class_loader.h>
#include "/opt/ros/jade/include/moveit/kinematics_base/kinematics_base.h"

int main(int argc, char** argv)
{
  // Create a classloader that is used to load the plugin
  pluginlib::ClassLoader<kinematics::KinematicsBase> poly_loader("moveit_core", "kinematics::KinematicsBase");

  try
  {
    boost::shared_ptr<kinematics::KinematicsBase> IKFast = poly_loader.createInstance("ikfast_kinematics_plugin::IKFastKinematicsPluginLF");
    ROS_INFO("The plugin was loaded.");
  }
  catch(pluginlib::PluginlibException& ex)
  {
    ROS_ERROR("The plugin failed to load for some reason. Error: %s", ex.what());
  }

  return 0;
}