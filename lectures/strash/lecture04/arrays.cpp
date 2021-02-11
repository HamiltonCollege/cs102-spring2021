#include <iostream>

int main() {
    short days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //std::cout << "Days in index 0: " << days[0] << std::endl;
    //std::cout << "Days in index 1: " << days[1] << std::endl;
    //std::cout << "Days in index 11: " << days[11] << std::endl;
    //days[0] = 30;
    //std::cout << "Days in index 0: " << days[0] << std::endl;
    std::cout << "sizeof array: " << sizeof(days)/sizeof(days[0]) << std::endl;
    std::cout << "ummm, why?" << days[60] << std::endl;
    return 0;
}
