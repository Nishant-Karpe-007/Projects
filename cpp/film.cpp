#include<iostream>
using namespace std;    

int main() {
    int film=135;
    int hours=60;
    int numberofhours;
    int numberofminutes;
    numberofhours = film / hours;
    numberofminutes = film % hours;
    cout << "Number of hours: " << numberofhours << endl;
    cout << "Number of minutes: " << numberofminutes << endl;

    return 0;
}