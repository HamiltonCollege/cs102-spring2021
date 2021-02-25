// Ask user for an integer n, output the sum:
//  1 + 2 + etc + n
// e.g. if the user inputs 3, our program outputs 6

#include <iostream>

// recursive functions call themselves:
int non_normal_sum(int n) {
    // base case (interrupts a recursive stack of calls to self):
    if (n == 1)
        return 1;
    return n + non_normal_sum(n - 1);
}

int normal_sum(int n) {
    int total = 0;
    for (int x = 1; x <= n; x++) {
        total += x;
    }
    return total;
}

int main() {
    std::cout << "Enter an integer: ";
    int n = 0;
    std::cin >> n;
    int answer = non_normal_sum(n);
    std::cout << "The sum is: " << answer << std::endl;
    return 0;
}
