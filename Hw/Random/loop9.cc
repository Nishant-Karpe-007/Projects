#include<iostream>

using namespace std;

int main(){

    int input,digit=0;
    cin>>input;
    while(input!=0){
        input=input/10;
        digit++;
    }
        cout<<digit;
}
