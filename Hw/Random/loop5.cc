#include<iostream>

using namespace std;

int main (){
    int input;
    float avg,sum =0;
    cin>>input;

    for(int i=1; i<=input;i++){
        sum=sum+i;
        avg=sum/input;
    }
    cout<<avg;
}
