#include<iostream>

using namespace std;

    int main(){
        int tickets[4]={10,20,30};
        int push = 15;
        for(int index = 3; index>=0; index--){
            cout<<tickets[index]<<endl;
            if(tickets[index]>push){
                tickets[index]=tickets[index + 1];
            }
            else {
            tickets[index]=push;
            break;
            }
        }
    //     for(int index = 3; index>=0; index--){
    //         cout<<tickets[index]<<endl;
    // }
}
