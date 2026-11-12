#include <iostream>
using namespace std;

int main() {
    int num = 7351;
    int sum = num / 1000 +
              (num / 100) % 10 +
              (num / 10) % 10 +
              num % 10;
    cout << "Sum = " << sum;
    return 0;
}
