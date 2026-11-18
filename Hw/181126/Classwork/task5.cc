#include<iostream>
using namespace std;

int remainingSeats(int occupied)
{
    return 30-occupied;
}


int main()
{
    int input=30;
    cout<<"30/"<<remainingSeats(input);
}
