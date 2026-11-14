#include<iostream>
using namespace std;

int main()
{
    int marks[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter the values: "<<endl;
        cin>>marks[i];
    }
    for (int i = 0 ; i < 5; i++)
    {
        cout<<marks[i]<<" ";
    }
}
