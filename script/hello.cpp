#include <gazebo/gazebo.hh>

namespace gazebo
{
  class HelloMyWorld : public WorldPlugin
  {
    public: HelloMyWorld() : WorldPlugin()
            {
              printf("Welcome to Thomas' world\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(HelloMyWorld)
}

