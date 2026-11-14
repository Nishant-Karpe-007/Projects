#include<iostream>
using namespace std;

int main()
{
    int find,count = 0 ;
    int ids[6]={41 ,72 ,15 ,72 ,60 ,72};
    cout<<"Enter your ID: ";
    cin>>find;
    for(int i = 0 ; i < 6; i++)
    {
        if(ids[i]==find){
            cout<<" "<<i<<endl;
            count++;
        }
    }
    cout<<"Count : "<<count;

}
