#include<iostream>

using namespace std;

    int main(){
        int marks[5]={28,31,26,30,29};
        for(int i = 0 ; i < 5; i++){
            marks[2]=32;
            cout<<marks[i]<<endl;
        }
    }
