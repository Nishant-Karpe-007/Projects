#include <iostream>
using namespace std;

int main() {
    int students = 1430, capacity = 50;
    cout << "Full buses = " << students / capacity << endl;
    cout << "Students without seat = " << students % capacity;
    return 0;
}
