#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include <cmath>

int sum_multiples(int parameter){
 int sum = 0;
  for(int i=1; i<=parameter; i++){
    while (i%3==0||i%5==0){
     sum=sum+i;
     break;
    }
  }
 return sum;
}


TEST_CASE("sum is computed","[sum_multiples]"){
  REQUIRE(sum_multiples(1000)==234168);
  REQUIRE(sum_multiples(0)==0);
}

int main(int argc, char* argv[]){
  int x;
  std::cout<<"type in a non-negative number"<<std::endl;
  std::cin>>x;
  if(x>0){
    std::cout<<"the sum of every number that is divisable by 3 or 5 from 1 to "<<x<<" added is "<<sum_multiples(x)<<std::endl;
  }
  else{
   std::cout<<"please try again using a number that is non- negative"<<std::endl;
  }
  return Catch::Session().run(argc, argv);
}
