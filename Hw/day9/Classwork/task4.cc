#include<iostream>
using namespace std;

int main()
{
    int find;
    int ids[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter the values: "<<endl;
        cin>>ids[i];
    }
    cout<<"Enter your ID: ";
    cin>>find;
    bool found = false;
    for(int i = 0 ; i < 5; i++)
    {
        if(ids[i]==find){
            cout<<"1";
            break;
        }
    }

}
