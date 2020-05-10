#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b){
  if(b==0){
    return a;
  }
  else{
    return gcd(b,(a%b));
  }
}

TEST_CASE("describe_gcd","[gcd]"){
  REQUIRE(gcd(2,4)==2);
  REQUIRE(gcd(9,6)==1);
  REQUIRE(gcd(3,7)==1);
  // REQUIRE(gcd(3,3)==20);
  //REQUIRE(gcd(0,0));
}  
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
