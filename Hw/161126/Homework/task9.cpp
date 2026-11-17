#include<iostream>
using namespace std;

int countDigits(int ticket);

int main()
{
    int ticket;
    cin>>ticket;

    cout<<countDigits(ticket);

    return 0;
}

int countDigits(int ticket)
{
    int count=0;

    if(ticket==0)
        return 1;

    while(ticket>0)
    {
        count++;
        ticket=ticket/10;
    }

    return count;
}
