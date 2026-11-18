#include<iostream>
using namespace std;
int parcelCharge(int input)
{
    return input+5;
}

int main()
{
    int parcel=40;
    cout<<parcel<<endl;
    cout<<parcelCharge(parcel)<<endl;
}
