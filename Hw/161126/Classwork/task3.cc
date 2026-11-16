#include<iostream>
using namespace std;

int addScores(int first, int second)
{
    return first+second;
}

int main()
{
    int num1, num2;
    cout<<"Enter the numbers: "<<endl;
    cin>>num1;
    cin>>num2;
    cout<<"Sum: "<<addScores(num1,num2);
}
