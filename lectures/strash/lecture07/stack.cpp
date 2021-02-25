/**
 * Function calls for illustrating behaviore of the (call) stack
 * @file stack.cpp
 * @author Darren Strash
 * @collaborators CS-102-02 (all of them!)
 * @date February 23, 2021
 */
#include <iostream>
#include <cstring>

/*
void bar(int, int);

void foo(int a) {
    std::cout << "in foo" << std::endl;
    std::cout << "before bar a: " << a << std::endl;
    bar(0, a);
    std::cout << "after bar a: " << a << std::endl;
}

void bar(int a, int b) {
    a++;
    std::cout << "in bar" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}

void oopsie(int depth) {
    std::cout << "depth: " << depth << std::endl;
    oopsie(depth + 1);
}*/

void oops(char hi[]) {
    strcpy(hi, "hi"); // do this instead of returning a local array
}

int main() {
    //foo(20);
    //oopsie(1);
    char hi[20];
    oops(hi);
    std::cout << hi << std::endl;
    return 0;
}
