#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float c_volume(float r, float h){
  float v= M_PI*pow(r,2)*h;
  return v;
}

float c_surface(float r, float h){
  float s= 2*M_PI*r*(r+h);
  return s;
}


TEST_CASE("compile c_volume","[c_volume]"){
  REQUIRE(c_volume(1.2,5)==Approx(22.6195));
  REQUIRE(c_volume(1,2)==Approx(6.2831));
  REQUIRE(c_volume(0,0)==Approx(0));
  REQUIRE(c_surface(1.2,5)==Approx(46.7469));
  REQUIRE(c_surface(1,2)==Approx(18.84956));
  REQUIRE(c_surface(0,0)==Approx(0));
} 

int main(int argc, char* argv[])
{
 float x;
 float y;
 std::cout<<"Type the radius of a cylinder"<<std::endl;
 std::cin>>x;
 std::cout<<"Type the height of a cylinder"<<std::endl;
 std::cin>>y;
 if(x>0){  
   std::cout<<"the volume of your cylinder is "<<c_volume(x,y)<<std::endl;
   std::cout<<"the surface of your cylinder is "<<c_surface(x,y)<<std::endl;
 }
 else{
   std::cout<<"please try again"<<std::endl;
 }
  return Catch::Session().run(argc, argv);
}
