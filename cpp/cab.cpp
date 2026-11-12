#include<iostream>
using namespace std;

int main() {
    int fixedcharge=50;
    int perkmcharge=12;
    int distance=15;
    int totalcost;
    totalcost = fixedcharge + (perkmcharge * distance);
    cout << "Total cost: " << totalcost << endl;    
    return 0;
}