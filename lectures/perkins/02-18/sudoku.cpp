#include <iostream>

bool is_sudoku(short arr2d[][3], short row_length) {
    short digits[10] = {};
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (digits[arr2d[row][col]] == 1) {
                return 0; // false
            } else {
                digits[arr2d[row][col]]++;
            }
        }
    }
    return 1; // true
}

int main() {
    // Declaring a 2D array:
    short sudoku[][3] =  {{2, 8, 1},
                          {3, 9, 4},
                          {5, 7, 6}};

    // Stored in memory something like:
    // row            row            row
    // 0010 1000 0001 0011 1001 0100 0101 0111 0110

    // Printing a 2D array:
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << sudoku[row][col] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    bool result = true;
    result = is_sudoku(sudoku, sizeof(sudoku[0]));
    std::cout << "is it a sudoku: " << result << std::endl;

    return 0;
}
