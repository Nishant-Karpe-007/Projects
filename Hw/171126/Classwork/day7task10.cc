#include <iostream>
using namespace std;

int main()
{
    int length = 48;
    int breadth = 18;
    int area = length * breadth;   // 864

    int a = length;
    int b = breadth;

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    int tileSide = a;
    int numberOfTiles = area / (tileSide * tileSide);

    cout << "Tile side = " << tileSide << endl;
    cout << "Number of tiles = " << numberOfTiles << endl;

    return 0;
}
