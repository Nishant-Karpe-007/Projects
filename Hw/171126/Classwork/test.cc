#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int gcd=1;
    cout<<"Enter your numbers: "<<endl;
    cin>>a>>b;

    if((a*2)>=b)
    {
        for(int i=1; i<=a;i++)
        {
            int num1=a;
            int num2=b;
            if(num1%i==0 && num2%i==0)
            {
                gcd=i;
            }
        }
    }
    else {
        for(int i=a; i<=a/2;i++)
        {
            int num1=a;
            int num2=b;
            if(num1%i==0 && num2%i==0)
            {
                gcd=i;
            }
        }

    }
    cout<<gcd<<endl;
}
