#include <iostream>
using namespace std;

int main() {
    int num = 407;
    int reverse = (num % 10) * 100 +
                  (num / 10 % 10) * 10 +
                  num / 100;
    cout << "Reversed number = " << reverse;
    return 0;
}
