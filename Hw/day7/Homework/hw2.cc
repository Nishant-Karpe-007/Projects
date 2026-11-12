#include<iostream>

using namespace std;

int main(){
    int balance;
    int limit = 20;
    cin >> balance;

    int visits = 0;

    while(balance > 0){
        if(balance >= limit){
            cout << limit << endl;
            balance = balance - limit;
        }
        else{
            cout << balance << endl;
            balance = 0;
        }
        visits++;
    }

    cout << "Visits = " << visits << endl;
}
