#include <iostream>

bool are_equal(short arr1[], short arr2[], short size1, short size2) {
    if (size1 != size2)
        return false;
    for (int i = 0; i < size1; i++) {
        // std::cout << "i = " << i;
        // std::cout << " arr1 is " << arr1[i];
        // std::cout << " arr2 is " << arr2[i];
        // std::cout << std::endl;
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    short eins[5] = {2, 3, 5, 7, 11};
    short zwei[6] = {3, 5, 7, 9, 11, 13};
    short drei[6] = {3, 5, 7, 9, 11, 17};
    // short drei[5] = {3, 5, 7, 9, 11};

    // bool eq = true;
    // eq = (drei == zwei);
    // std::cout << eq << std::endl;
    //

    // short drei[5] = {};
    // drei = zwei;

    // std::cout << zwei << std::endl;
    // std::cout << drei << std::endl;

    bool eq = true;
    // std::cout << "size of zwei: " << sizeof(zwei)/sizeof(zwei[0]) << std::endl;
    // std::cout << "size of drei: " << sizeof(drei)/sizeof(drei[0]) << std::endl;
    // eq = are_equal(zwei, drei, sizeof(zwei), sizeof(drei));
    eq = are_equal(zwei, drei, sizeof(zwei)/sizeof(zwei[0]), sizeof(drei)/sizeof(drei[0]));

    std::cout << eq << std::endl;

    return 0;
}
