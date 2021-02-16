
// Warmup: Which of these four array initializations
//         will cause an error?

#include <iostream>

const short KAZU = 4;

int main() {
    long shiro[KAZU] = {};                          // (a)
    float midori[KAZU] = {0.0, 1.0, 2.0, 3.0, 4.0}; // (b)
    int aka[3] = {1, 2, 3};                         // (c)
    char murasaki[] = "This one is the answer";     // (d)
    return 0;
}
