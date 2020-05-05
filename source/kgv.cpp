#include <iostream>
#include <cmath>

int ggt(int a, int b){
  if(b==0){
    return a;
  }
  else{
    return ggt(b, (a%b));
  }
}

int kgv(int a, int b){
  return (abs(a*b)/ggt(a,b));
} 

int main(){
  int c = 1;
  for(int i=1;i<20; i++){
    c= kgv(c,i);
    std::cout<<i<<" "<<c<<std::endl;
  }
}
