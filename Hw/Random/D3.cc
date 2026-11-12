#include<iostream>

int main(){
    int age;

    std::cout<<"Enter input: "<<std::endl;

    std::cin>>age;

    if(age>=18){
        std::cout<<"Eligible to vote"<<std::endl;
    }
    else {
        std::cout<<"not Eligible to vote"<<std::endl;

    }
}
