#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

double mile_to_kilometer(double mile){
 double kilometer = mile*1.60934;
 return kilometer;
}

TEST_CASE("compile mile_to_kilometer ","[mile_to_kilometer]"){
  REQUIRE(mile_to_kilometer(0)==Approx(0));
  REQUIRE(mile_to_kilometer(1)==Approx(1.60934));
  REQUIRE(mile_to_kilometer(-1)==Approx(-1.60934));
}

int main(int argc, char* argv[])
{
 double miles;
 std::cout<<"Enter miles you like to convert"<<std::endl;
 std::cin>>miles;
 if(miles<1){
   std::cout<<"please use a non-negative number"<<std::endl;
 }
 else{
 std::cout<<miles<<" miles are "<<mile_to_kilometer(miles)<<" kilometers"<<std::endl;
 }
 return Catch::Session().run(argc, argv);
}


