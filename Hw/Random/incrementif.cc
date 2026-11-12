#include<iostream>

int main(){

    int input;
    std::cout<<"Enter the number: "<<std::endl;
    std::cin>>input;
    if(input>=0){
        input=input+1;
        std::cout<<input<<std::endl;
    }
    else{
        std::cout<<input<<std::endl;
    }
}
