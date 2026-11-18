#include<iostream>
using namespace std;

void printOrder(int items)
{
    if(items>10)
    {
        cout<<items/10<<"/"<<items;
    }
    else
    {
        cout<<items;
    }
}

int main()
{
    int input=12;
    printOrder(input);
}
