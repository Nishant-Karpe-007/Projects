#include<iostream>
using namespace std;

double area(double base, double height)
{
    return 0.5*base*height;
}

int main()
{
    int num1, num2;
    cout<<"Enter the numbers: "<<endl;
    cin>>num1;
    cin>>num2;
    cout<<"Area: "<<area(num1,num2);
}
