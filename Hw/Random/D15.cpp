#include<iostream>

int main() {
    int age=17;
    bool license=true;
    bool isEligible=(age>=18 && license==true);
    std::cout << "Is the person eligible to drive? " << isEligible << std::endl;
} 