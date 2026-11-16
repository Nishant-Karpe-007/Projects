#include<iostream>
using namespace std;

int greastestScore(int a , int b , int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    int num1, num2, num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cout<<greastestScore(num1,num2,num3);
}
