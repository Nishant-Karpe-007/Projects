#include<iostream>
using namespace std;

int countEvenTickets(int n){
    if(n%2==0)
    {
        return n/2;
    }
    else {
        return (n-1)/2;
    }
}

int main(){
    int input;
    cin>>input;
    cout<<countEvenTickets(input);

}
