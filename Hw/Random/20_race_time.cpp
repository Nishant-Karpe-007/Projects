#include <iostream>
using namespace std;

int main() {
    int seconds = 5000;
    cout << "Hours = " << seconds / 3600 << endl;
    cout << "Minutes = " << (seconds % 3600) / 60 << endl;
    cout << "Seconds = " << seconds % 60;
    return 0;
}
