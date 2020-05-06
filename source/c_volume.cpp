#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float c_volume(float r, float h){
  float v= M_PI*pow(r,2)*h;
  return v;
}

TEST_CASE("compile c_volume","[c_volume]"){
  REQUIRE(c_volume(1.2,5)==Approx(22.6195));
  REQUIRE(c_volume(1,2)==Approx(6.2831));
  REQUIRE(c_volume(5.233,64.4)==Approx(0.72));
} 

int main(int argc, char* argv[])
{
 float x;
 float y;
 std::cout<<"Type the radius of a cylinder"<<std::endl;
 std::cin>>x;
 std::cout<<"Type the height of a cylinder"<<std::endl;
 std::cin>>y;
 std::cout<<"the volume of your cylinder "<<" is "<<c_volume(x,y)<<std::endl;
  return Catch::Session().run(argc, argv);
}
