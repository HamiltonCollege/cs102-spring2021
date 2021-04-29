/**
 * Illustrate the running time of linear vs. binary search 
 * @file search.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date April 29, 2021
 */
#include <iostream>
#include <iomanip>
#include <chrono>
#include <cstring>
#include <vector>

using namespace std;

long linear_search(const vector<int> & the_ints, const int element_to_search_for);
long binary_search(const vector<int> & the_ints,
                   const int element_to_search_for,
                   const long start_index,
                   const long end_index);

/**
 *
 * @param array
 * @param x
 * @return
 */
double time_linear(const vector<int> & array, const int x) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = 
        std::chrono::high_resolution_clock::now();

    linear_search(array, x);

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = 
        std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> run_time = end_time - start_time;
    return chrono::duration_cast<chrono::milliseconds>(run_time).count();
}

/**
 * Time a run of binary_search for the given x
 * @param array the array (as a vector) to search
 * @param x the value to search for
 * @return the time in milliseconds
 */
double time_binary(const vector<int> & array, const int x) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time =
            std::chrono::high_resolution_clock::now();

    binary_search(array, x, 0, array.size() - 1);

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time =
            std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> run_time = end_time - start_time;
    return chrono::duration_cast<chrono::milliseconds>(run_time).count();
}


/**
 * Print a table of running times for linear search
 */
void time_linear_experiment() {
    cout << "Legend:" << endl;
    cout << "    n    - the number of elements in the array" << endl;
    cout << "    time - the running time (in ms) of linear search" << endl;
    cout << setw(10) << "n" << setw(10) << "time" << endl;
    for (size_t size = 1; size < 100000000; size *= 2) {
        vector<int> array;
        for (size_t index = 0; index < size; index++)
            array.push_back(index);
        cout << setw(10) << size << setw(10) << time_linear(array, -10) << endl;
    }
}

/**
 * Print a table of running times for linear search and binary search
 */
void time_both() {
    cout << "Legend:" << endl;
    cout << "    n    - the number of elements in the array" << endl;
    cout << "  linear - the running time (in ms) of linear search" << endl;
    cout << "  binary - the running time (in ms) of bineary search" << endl;
    cout << setw(10) << "n" << setw(10) << "linear" << setw(10) << "binary" << endl;
    for (size_t size = 1; size < 100000000; size *= 2) {
        vector<int> array;
        for (size_t index = 0; index < size; index++)
            array.push_back(index);
        cout << setw(10) << size 
             << setw(10) << time_linear(array, -10)
             << setw(10) << time_binary(array, -10)
             << endl;
    }
}

/**
 * Perform linear search for the given element element_to_search_for
 * @param the_ints the array (as a vector) to search through
 * @param element_to_search_for the element to search for
 * @return the index of the element, or -1 if its not in the array
 */
 long linear_search(const vector<int> & the_ints, const int element_to_search_for) {
     for (long index = 0; index < the_ints.size(); index++) {
         if (the_ints[index] == element_to_search_for)
             return index;
     }

     return -1;
 }

 /**
  * Perform linear search for the given element element_to_search_for
  * @param the_ints the array (as a vector) to search through
  * @param element_to_search_for the element to search for
  * @param start_index the starting index for the subarray to binary search
  * @param end_index the ending index for the subarray to binary search
  * @return the index of the element, or -1 if its not in the array
  */
long binary_search(const vector<int> & the_ints,
                   const int element_to_search_for,
                   const long start_index,
                   const long end_index) {
     // base case
     if (start_index > end_index)
         return -1;

     // recursive case
     const long mid_index = (start_index + end_index) / 2;
     if (the_ints[mid_index] == element_to_search_for)
         return mid_index;
     else if (element_to_search_for < the_ints[mid_index])
         return binary_search(the_ints, element_to_search_for,
                              start_index, mid_index - 1);
     else
         return binary_search(the_ints, element_to_search_for,
                              mid_index + 1, end_index);
 }

// Controls operation of program
int main(int argc, char ** argv) {
    //time_linear_experiment();
    time_both();
    return 0;
}
