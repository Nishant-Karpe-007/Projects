#include<iostream>

int main(){
  int input;
  std::cout<<"Enter number: "<<std::endl;
  std::cin>>input;

  if(input%2==0){
      std::cout<<"Number is even"<<std::endl;
  }
  else{
      std::cout<<"Number is odd"<<std::endl;
  }
}
