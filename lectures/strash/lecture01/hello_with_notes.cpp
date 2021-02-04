
// similar to Python import
// file named "iostream" on your computer, containing code
// that you want to include in this file.
// io = input/output
#include <iostream>

// Controls the main executation of the program
// function called main
// C++ is a "type safe" language.
// Can't do: return None, string, int, as different options,
// stuck with the type you choose (need!)
// void type -> is similar to NoneType in Python
// every C++ program will have a main function.
// starting point for your program.
int main() {
    // C++ provides a "standard" library "std" -> "standard"
    // std::, says "use the namespace std"
    // writes text to "standard output" -> what is printed when
    // you run the program
    // << operator, arrow indicates direction that data flows
    // std::endl -> end of line, specific to your machine
    std::cout << "Hello, world!" << std::endl;
    // return 0 -> "program was successful"
    // returning anything else indicates an error
    return 1;
}
