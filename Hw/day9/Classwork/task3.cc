#include<iostream>
using namespace std;

int main()
{
    int replace;
    int records[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter the values: "<<endl;
        cin>>records[i];
    }
    cout<<"Replacement value: ";
    cin>>replace;
    records[2]=replace;
    for (int i = 0 ; i < 5; i++)
    {
        cout<<records[i]<<" ";
    }
}
