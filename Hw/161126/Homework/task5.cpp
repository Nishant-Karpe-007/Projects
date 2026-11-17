#include<iostream>
using namespace std;

double areaOfTriangle(double base,double height);

int main()
{
    double base,height;
    cin>>base>>height;

    cout<<areaOfTriangle(base,height);

    return 0;
}

double areaOfTriangle(double base,double height)
{
    return (base*height)/2;
}
