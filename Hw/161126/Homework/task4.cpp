#include<iostream>
using namespace std;

int sum(int first,int second);

int main()
{
    int first,second;
    cin>>first>>second;

    cout<<sum(first,second);

    return 0;
}

int sum(int first,int second)
{
    return first+second;
}
