#include<iostream>
using namespace std;

void addNumbers(){
    cout<<"Input inside function: ";
    int num3,num4;
    cin>>num3>>num4;
    cout<<"Function with void return type and no parameters: "<<num3+num4<<endl;
}

void addNumbers(int a , int b){
    cout<<a+b<<endl;
    cout<<"Function with void return type and parameters: "<<endl;
}

void addNumbers(int a , int b, float c){
    cout<<a+b+c<<endl;
    cout<<"Function with void return type and three parameters: "<<endl;
}

int addthreenumbers(int a , int b){
    cout<<"Function with int return type and parameters: "<<endl;
    return a+b;
}

int addthreeNumbers(int a , int b, float c){
    cout<<"Function with int return type and three parameters: "<<endl;
    return a+b+c;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter the numbers:"<<endl;
    cin>>num1>>num2>>num3;
    addNumbers();
    addNumbers(num1, num2 );
    addNumbers(num1, num2, num3);
    cout<<addthreenumbers(num1, num2)<<endl;
    cout<<addthreeNumbers(num1, num2, num3)<<endl;
}
