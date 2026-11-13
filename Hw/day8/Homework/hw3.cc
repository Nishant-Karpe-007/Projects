#include <iostream>
using namespace std;

int main() {
    int arr[6] = {21,35,21,44,21,50};
    int target;

    for(int t=0;t<2;t++) {
        if(t==0){
            target=21;
        }
        else{
            target=99;
        }
        int count=0;

        cout << "Searching for " << target << endl;

        for(int i=0;i<6;i++) {
            if(arr[i]==target) {
                cout << "Found at index: " << i << endl;
                count++;
            }
        }

        if(count==0) {
            cout << "Not found" << endl;
        }

        cout << "Match count: " << count << endl;
    }

    return 0;
}
