
#include<iostream>

using namespace std;

int main (){
    int input;
    int fact=1;
    cin>>input;

    for(int i=2; i<=input;i++){
       fact = fact*i;
    }
    cout<<fact;
}
