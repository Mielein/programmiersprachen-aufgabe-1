#include <iostream>
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int sum(int eingabe){
 int zahl = eingabe;
 int qsum = 0;
 

 if(eingabe>0){
  while (0 != zahl){
   qsum= qsum+(zahl%10);
   zahl = zahl/10;
  }
  return qsum;
 }
 else{
   return -1;
 }
}

TEST_CASE("checksum is computed","[sum]"){
 REQUIRE(sum(123)==6);
 REQUIRE(sum(234)==9);
 REQUIRE(sum(121067)==17);
 REQUIRE(sum(0));
}

int main(int argc, char* argv[]){
  int x;
  std::cout<<"Type a non-negative number to get the checksum of it"<<std::endl;
  std::cin>>x;
  if(x<=0){
    std::cout<<"I said non-negative numbers"<<std::endl;
    }
  else{
  std::cout<<"the checksum of the number "<<x<<" is "<<sum(x)<<std::endl;
  }
 return Catch::Session().run(argc, argv);
}
