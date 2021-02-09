#include <iostream>

int main(){
    // CITE: http://www.cplusplus.com/doc/tutorial/variables/
    // DESC: Learned about the long long data type.
    short max_power = 0;             // this is new
    std::cout << "Largest power? "; // this is new
    std::cin >> max_power;          // this is new
    long long power = 1;
    for (int i = 0; i <= max_power; i++) {
        std::cout << "2^" << i << " = " << power << std::endl;
        power *= 2;
    }
    return 0;
}
