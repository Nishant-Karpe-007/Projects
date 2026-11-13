#include<iostream>

using namespace std;

int main(){
    int team1, index;
    cout<<"Enter your locker number;"<<endl;
    cin>>team1;
    int lockers[5]={12,27,31,27,42};

    for (index = 0;index < 5; index++){
        if(lockers[index] == team1){
            cout<<index;
            break;
        }
    }
    if (index == 5) {
        cout<<"Not found"<<endl;
    }
}
