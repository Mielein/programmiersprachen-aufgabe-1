#include <iostream>
#include <cmath>
#include <algorithm>

bool is_prime(int x){
 bool prime=true;
 for(int i=2;i<=x/2; i++){
  if(x%i == 0){
   prime=false;
  }
 }
 return prime;
} 

int main(){
 int number;

 std::cout<<"Gib eine Zahl ein:"<<std::endl;
 std::cin>>number;

 if(is_prime(number)==true){
  std::cout<<number<<" ist eine Primzahl \n"<<std::endl;
 }
 else{
  std::cout<<number<<" ist keine Primzahl \n"<<std::endl;
 }
 return 0;
}


