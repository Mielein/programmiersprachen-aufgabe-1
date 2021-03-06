#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int factorial(int number){
 int product=1;
 for(int i=1; i<=number; i++){
  product=product*i;
 } 
  return product;
}

TEST_CASE("compile factorial","[factorial]"){
  REQUIRE(factorial(-3)==1);
  REQUIRE(factorial(0)==1);
  REQUIRE(factorial(5)==120);
} 

int main(int argc, char* argv[])
{
 int x;
 std::cout<<"Type a number to get the product"<<std::endl;
 std::cin>>x;
 if(x<0){
   std::cout<<"choose a non-negative number"<<std::endl;
 }
 else{
 std::cout<<"the product of the numbers are "<<factorial(x)<<std::endl;
 }
 return Catch::Session().run(argc, argv);
}
