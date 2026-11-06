#include<iostream>

int main() {
    int celsius=37;
    double f=(celsius*9/5)+32;
    double f2=(celsius*9.0/5.0)+32.0;
    std::cout << celsius << " degrees Celsius is equal to " << f << " degrees Fahrenheit" << std::endl;
    std::cout << celsius << " degrees Celsius is equal to " << f2 << " degrees Fahrenheit" << std::endl;
    return 0;
}