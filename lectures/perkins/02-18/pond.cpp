#include <iostream>
#include <cstring>

bool contains_punct(char arr[], short size) {
    for (int i = 0; i < size; i++) {
        if (((int) arr[i]) > 32 && ((int) arr[i] < 47)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    // char rei[] = {'A', 'n', ' ', 'o', etc, 'd', '\0'};
    char ichi[] = "An old silent pond";
    char ni[] = "An old silent pond";
    char san[] = "A frog jumps into the pond";
    char shi[] = "Splash! Silence again.";

    // Are the strings equal?
    bool eq = true;
    eq = (ichi[2] == ni[0]);
    std::cout << (int) ichi[0] << std::endl;
    std::cout << eq << std::endl;

    // ichi:  A___ n___ ____ o___ etc
    //   ni:                           A___ n___ ____ o___ etc

    // Try that again with strcmp():
    int result = strcmp(ichi, shi);
    std::cout << "result: " << result << std::endl;

    // Sending char arrays to a function:
    bool does = true;
    does = contains_punct(ichi, strlen(ichi));

    // does = contains_punct(shi, sizeof(shi)/sizeof(shi[0]));
    std::cout << "punct? " << does << std::endl;

    return 0;
}
