#include<iostream>
using namespace std;

int sumDigits(int number);

int main()
{
    int number;
    cin>>number;

    cout<<sumDigits(number);

    return 0;
}

int sumDigits(int number)
{
    int sum=0;

    while(number>0)
    {
        sum=sum+number%10;
        number=number/10;
    }

    return sum;
}
