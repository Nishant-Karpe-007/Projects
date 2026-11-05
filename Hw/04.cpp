#include <iostream>
using namespace std;

int main() {
    int students = 85, team = 6;
    cout << "Full teams = " << students / team << endl;
    cout << "Leftover students = " << students % team;
    return 0;
}
