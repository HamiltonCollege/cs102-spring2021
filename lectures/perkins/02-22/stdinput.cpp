// reading standard input

#include <iostream>

/*
1 2 3 6
2 3 4 9
1 3 5 9
*/

void sum_rows(int arr[3][4]) {
    for (int row = 0; row < 3; row++) {
        int row_total = 0;
        for (int col = 0; col < 3; col++) {
            row_total += arr[row][col];
        }
        arr[row][3] = row_total;
    }
}

void print_array(int arr[3][4]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            std::cout << arr[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[3][4] = {};
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            std::cin >> arr[row][col];
        }
    }
    print_array(arr);
    sum_rows(arr);
    std::cout << std::endl;
    print_array(arr);
    return 0;
}
