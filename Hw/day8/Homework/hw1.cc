#include <iostream>
using namespace std;

int main() {
    int arr[6];

    cout << "Enter 6 delivery counts: ";
    for(int i=0;i<6;i++) {
        cin >> arr[i];
    }

    cout << "First count: " << arr[0] << endl;
    cout << "Last count: " << arr[5] << endl;

    cout << "Reverse order: ";
    for(int i=5;i>=0;i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
