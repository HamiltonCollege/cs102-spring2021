#include <iostream>
#include <cstring>

int main() {
    char ichi[] = "An old silent pond";
    char ni[] = "An old silent pond";
    char san[] = "A frog jumps into the pond";

    // Are the strings equal?
    bool eq = true;
    eq = (ichi == ni);
    std::cout << eq << std::endl;

    // Try that again:
    int result = strcmp(ichi, ni);
    std::cout << result << std::endl;

    // Try that again with unequal strings:
    int result2 = strcmp(ichi, san);
    std::cout << result2 << std::endl;

    return 0;
}
