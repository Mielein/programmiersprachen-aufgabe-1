#include <iostream>
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int sum(int zahl){
 int qsum = 0;
 while (0 != zahl){
  qsum= qsum+(zahl%10);
  zahl = zahl/10;
 }
 return qsum;
}

TEST_CASE("checksum is computed","[sum]"){
 REQUIRE(sum(123)==6);
 REQUIRE(sum(234)==9);
 REQUIRE(sum(890)==9);
 REQUIRE(sum(121067)==17);
}

int main(int argc, char* argv[]){
  int x;
  std::cout<<"Type a number to get the checksum"<<std::endl;
  std::cin>>x;
  std::cout<<"the checksum of the number "<<x<<" is "<<sum(x)<<std::endl;
 return Catch::Session().run(argc, argv);
}
