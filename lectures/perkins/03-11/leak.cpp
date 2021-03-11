#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < 50; i++)
        int * arr = new int[n];
    delete[] arr;
    return 0;
}
