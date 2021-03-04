// Warmup: Which word would prompt the output "nonononon"?

#include <iostream>
#include <cstring>

bool foo(char s[], int i, int j) {
    if (i == j) {
        return true;
    } else if (s[i] != s[j]) {
        return false;
    } else if (i < j) {
        return foo(s, i + 1, j - 1);
    } else {
        return true;
    }
}

int main() {
    std::cout << "Please type a word that has at most 9 characters: ";
    char s[10] = {};
    std::cin.getline(s, 10, '\n');
    if (foo(s, 0, strlen(s) - 1)) {
        std::cout << "nonononon" << std::endl;
    } else {
        std::cout << "yesyesyes" << std::endl;
    }
    return 0;
}
