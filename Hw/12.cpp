#include <iostream>
using namespace std;

int main() {
    int pens = 500, capacity = 12;
    cout << "Full boxes = " << pens / capacity << endl;
    cout << "Leftover pens = " << pens % capacity;
    return 0;
}
