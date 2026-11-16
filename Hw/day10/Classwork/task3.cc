#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name,age;
    cout<<"Enter your age : "<<endl;
    getline(cin,age).ignore();
    cout<<"Enter your name : "<<endl;
    getline(cin,name);
    cout<<age<<age<<endl;
    cout<<age<<name<<endl;
}
