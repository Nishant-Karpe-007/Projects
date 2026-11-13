#include <iostream>
using namespace std;

int main() {
    int arr[5] = {55,72,68,91,83};

    int index=2;
    int score=76;

    if(index>=0 && index<5) {
        arr[index]=score;

        for(int i=0;i<5;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Invalid index" << endl;
    }

    int arr2[5] = {55,72,68,91,83};

    index=5;
    score=60;

    if(index>=0 && index<5) {
        arr2[index]=score;

        for(int i=0;i<5;i++) {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Invalid index" << endl;
    }

    return 0;
}
