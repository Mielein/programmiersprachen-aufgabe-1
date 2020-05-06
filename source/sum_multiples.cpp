#include <iostream>
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int sum_multiples(){
 int sum = 0;
  for(int i=1; i<=1000; i++){
    while (i%3==0||i%5==0){
     sum=sum+i;
     break;
  }
 } 
 return sum;
}

TEST_CASE("sum is computed","[sum]"){
 REQUIRE(sum_multiples()==6);
 REQUIRE(sum_multiples()==23456);
 REQUIRE(sum_multiples()==4);
 REQUIRE(sum_multiples()==17);
}

int main(int argc, char* argv[]){
  std::cout<<"the sum of every number that is divisable by 3 or 5 from 1 to 1000 added is "<<sum_multiples()<<std::endl;
 return Catch::Session().run(argc, argv);
}
