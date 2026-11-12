#include<iostream>
using namespace std;    

int main() {
   int chocolate=50;
   int childern=7;
   int remaining;
   int share;
   remaining = chocolate % childern;
   share = chocolate / childern;
   cout << "Remaining chocolate: " << remaining << endl;
   cout << "Share of chocolate: " << share << endl;
    return 0;

}