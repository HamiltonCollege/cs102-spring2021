#include <iostream>
#include <ctime>
#include <cstdlib>

// Does this code have a memory leak?

int main() {
    srand( time( nullptr ) );
    int num = (rand() % 10) + 1;
    int * dyno = new int[num];
    for (int i = 0; i < num; i++) {
        dyno[i] = (i + 1);
        std::cout << dyno[i] << " ";
    }
    std::cout << std::endl;
    delete[] dyno;
    return 0;
}


