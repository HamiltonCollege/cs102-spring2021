#include <iostream>

int main(){
    int power = 1;
    for (int i = 0; i < 7; i++) {
        std::cout << "2^" << i << " = " << power << std::endl;
        power *= 2;
    }
    return 0;
}
