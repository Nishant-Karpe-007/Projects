#include<iostream>

using namespace std;

int main(){
    int rows, cols;
    cin >> rows;
    cin >> cols;

    int count = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1){
                cout << "#";
                count++;
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }

    cout << "Border positions = " << count << endl;
}
