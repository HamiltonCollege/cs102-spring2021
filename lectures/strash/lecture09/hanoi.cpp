/**
 * Recursively solves the Tower of Hanoi puzzle
 * @file hanoi.cpp
 * @author Darren Strash
 * @collaborators CS 102-02
 * @date March 2, 2021
 */
#include <iostream>

const int NUM_PEGS = 3;
const int NUM_DISCS = 4;

/**
 * Print the pegs + discs in an aesthetically pleasing format
 * @param pegs an array of discs for each peg
 * @return none
 */
void print_pegs(int pegs[NUM_PEGS][NUM_DISCS]) {
    for (int peg = 0; peg < NUM_PEGS; peg++) {
        int disc = 0;
        std::cout << peg + 1 << ": ";
        while (pegs[peg][disc] != 0 && disc < NUM_DISCS) {
            std::cout << pegs[peg][disc++];
        }
        std::cout << std::endl;
    }
}

/**
 * Get the index of the top disc in a given peg.
 * @param pegs the peg array
 * @param the peg for which we want the top disc
 * @return the index of the top disc for the peg
 */
int get_top(int pegs[NUM_PEGS][NUM_DISCS], int peg) {
    for (int i = 0; i < NUM_DISCS; i++) {
        if (pegs[peg - 1][i] == 0) {
            return i - 1;
        }
    }
    return NUM_DISCS - 1;
}

/**
 * Move the top disc from one peg to another
 * @param pegs the peg array
 * @param from_peg the peg from which to move a disc
 * @return to_peg the peg to which we which to move a disc
 * @return none
 */
void move_to(int pegs[NUM_PEGS][NUM_DISCS], int from_peg, int to_peg) {
    // find indices of the tops of the pegs
    int from_top_index = get_top(pegs, from_peg);
    int to_top_index = get_top(pegs, to_peg);

    // move the peg
    pegs[to_peg - 1][to_top_index + 1] = pegs[from_peg - 1][from_top_index];
    pegs[from_peg - 1][from_top_index] = 0;

    std::cout << "Moving " << pegs[to_peg - 1][to_top_index + 1] << " from " << from_peg << " to " << to_peg << std::endl;
    print_pegs(pegs);
    //std::cin.get();
}

/**
 * Recursively solve a Tower of Hanoi puzzle.
 * @param pegs the peg array
 * @param current_num_discs the number of discs to move
 * @param from_peg the peg from which to move a tower of discs 
 * @param intermediate_peg the peg to use as scratch space for moving discs.
 * @return to_peg the peg to which we which to move a tower of discs
 * @return none
 */
void solve(int pegs[NUM_PEGS][NUM_DISCS], 
           int current_num_discs, 
           int from_peg, 
           int intermediate_peg, 
           int to_peg) {
    if (current_num_discs == 1) {
        move_to(pegs, from_peg, to_peg);
        return;
    }

    solve(pegs, 
          current_num_discs - 1, 
          from_peg,
          to_peg,
          intermediate_peg);
    move_to(pegs, from_peg, to_peg);
    solve(pegs,
          current_num_discs - 1,
          intermediate_peg,
          from_peg,
          to_peg);
}

// Controls operation of program.
int main() {
    int pegs[NUM_PEGS][NUM_DISCS] = {};

    // fill in first peg with discs in increasing order by diameter
    for (int i = 0; i < NUM_DISCS; i++) {
        pegs[0][i] = NUM_DISCS - i;
    }

    std::cout << "Starting configuration:" << std::endl;
    print_pegs(pegs);
    solve(pegs, NUM_DISCS, 1, 2, 3);
    std::cout << "Ending configuration:" << std::endl;
    print_pegs(pegs);
    return 0;
}
