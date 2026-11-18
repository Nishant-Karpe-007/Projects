#include<iostream>
using namespace std;

int perimeter(int side)
{
   return side*4;
}

int perimeter(int length,int width)
{
   return (2*length)+(2*width);
}

int main()
{
    int side, length, width;
    cin>>side>>length>>width;
    cout<<perimeter(side)<<endl;
    cout<<perimeter(length,width);
}
