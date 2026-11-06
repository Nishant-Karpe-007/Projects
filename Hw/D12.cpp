#include<iostream>

int main() {
    int distance=150,petrol=12;
    double mileage=(double)distance/petrol;
    std::cout << "Mileage: " << mileage << " km/l" << std::endl;
    return 0;
}