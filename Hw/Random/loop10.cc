
#include<iostream>

using namespace std;

int main(){

    int input;
    int sum=0;
    cin>>input;
    while(input!=0){

        int digit=input%10;
        sum=sum+digit;
        input=input/10;
    }
        cout<<sum;
}
