#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float fract(float number){
  float c;
  if(number<0){
    c= number-ceil(number);
  }
  else{
    c= number-floor(number);
  }
    
  return c;
}

TEST_CASE("compile fract","[fract]"){
  REQUIRE(fract(1.2)==Approx(0.2));
  REQUIRE(fract(0)==Approx(0));
  REQUIRE(fract(0.72)==Approx(0.72));
  REQUIRE(fract(-1.5)==Approx(-0.5));
} 

int main(int argc, char* argv[])
{
 float x;
 std::cout<<"Type a number to get the fractional digits"<<std::endl;
 std::cin>>x;
 std::cout<<"the fractional numbers of the number "<<x<<" are "<<fract(x)<<std::endl;
 return Catch::Session().run(argc, argv);
}

