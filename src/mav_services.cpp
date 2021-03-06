#include <mav_manager/mav_manager_services.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "manager");
  ros::NodeHandle nh;

  auto mav = std::make_shared<mav_manager::MAVManager>();

  mav_manager::MAVManagerServices mm_srvs(mav);

  ros::spin();

  return 0;
}
