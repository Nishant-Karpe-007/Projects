#include<iostream>
using namespace std;    

int main() {
    int stock=48;
    int sold=19;
    int remaining;

    remaining = stock - sold;
    cout << "Remaining stock: " << remaining << endl;
    return 0;
}