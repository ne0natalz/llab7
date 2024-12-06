#include <iostream>

int main() {
    int a  =  20;
    int b = 30;
    int c = 4;
    float output;

    output = static_cast<float>(a + b) / c;
    std::cout << "output: " << output << std::endl;
    return 0;
}
