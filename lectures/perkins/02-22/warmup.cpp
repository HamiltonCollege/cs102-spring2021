
// Warmup: what will the output be, if anything?

#include <iostream>

int main() {
    char arr[2][2][5] = {{"this", "code"}, {"is", "broken"}};        
    std::cout << arr[0][4] << std::endl;
    return 0;
}
