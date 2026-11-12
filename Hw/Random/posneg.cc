#include<iostream>

int main(){
  int input;
    std::cout<<"Enter the number: "<<std::endl;
    std::cin>>input;

    if(input<0){
        std::cout<<"Number is Negative";
    }
    else{

        std::cout<<"Number is Positive";
    }
}
