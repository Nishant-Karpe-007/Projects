#include<iostream>

int main() {
    int marks=88,attendance=72;
    bool isPass=(marks>=85 || attendance>=90);
    std::cout << "Is the student eligible for scholarship? " << isPass << std::endl;
}