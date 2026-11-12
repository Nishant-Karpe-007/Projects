#include<iostream>
using namespace std;

int main() {
    int numberofnotebooks=40;
    int costpernotebook=18;
    int salesprice=25;
    int profit;
    profit = (salesprice - costpernotebook) * numberofnotebooks;
    cout << "Profit: " << profit << endl;
}