#include <iostream>

bool nope(int year) {

    // we have a leap year when the year is:
    // div by 4
    // not div by 100
    // except for those div by 400

    // 2024

    if (year % 4 == 0) {
        if (year % 100 != 0) {
            return true; // 2024
        } else if (year % 400 == 0) {
            return true; // 2000
        }
    }
    return false;

    // refactoring code

    // if (year % 4 == 0) {
    //     if (year % 100 == 0) {
    //         if (year % 400 == 0) {
    //             return true; // div by 4 and 100 and 400
    //         } else {
    //             return false; // div by 4 and 100 and not 400
    //         }
    //     } else {
    //         return true; // div by 4, not by 100
    //     }
    // } else {
    //     return false; // not div by 4
    // }
}

int main() {

    std::cout << "Enter year: ";
    int year = 0;
    std::cin >> year;
    std::cout << "Result from nope() is: " << nope(year) << std::endl;

}
