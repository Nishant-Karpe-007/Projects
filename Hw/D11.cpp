#include<iostream>  

int main() {
    int Maths=82,Science=91,English=77;
    double average=(Maths+Science+English)/3;
    double avg2=(Maths+Science+English)/3.0;
    std::cout << "Average marks: " << average << std::endl;
    std::cout << "Average marks: " << avg2 << std::endl;
}