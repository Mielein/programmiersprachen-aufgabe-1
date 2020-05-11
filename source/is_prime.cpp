#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include <cmath>
#include <algorithm>

bool is_prime(int x){
bool prime=true;
 if(x<2){
   prime=false;
 }
 for(int i=2;i<=x/2; i++){
  if(x%i == 0){
    prime=false;
  }
 }
 return prime;
}

TEST_CASE("compile is_prime","[is_prime]"){
  REQUIRE(is_prime(-3)==false);
  REQUIRE(is_prime(4)==false);
  REQUIRE(is_prime(7)==true);
} 

int main(int argc, char* argv[]){
 int number;
 std::cout<<"Gib eine Zahl ein:"<<std::endl;
 std::cin>>number;
 if(number>1){
   if(is_prime(number)==true){
     std::cout<<number<<" ist eine Primzahl \n"<<std::endl;
   }
   else{
     std::cout<<number<<" ist keine Primzahl \n"<<std::endl;
   }
 }
 else{
   std::cout<<"choose a number bigger than one"<<std::endl;
 } 
 return Catch::Session().run(argc, argv);
}


