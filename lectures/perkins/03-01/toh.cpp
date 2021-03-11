#include <iostream>

const int NUM_PEGS = 3;   // number of pegs
const int NUM_DISCS = 4;  // number of discs we start with
const int NUM_SPOTS = 12; // 3 pegs x 4 discs

void print(int pegs[NUM_SPOTS]) {

    int peg_capacity = NUM_SPOTS / NUM_PEGS;

    for (int peg = 0; peg < NUM_PEGS; peg++) {
        std::cout << "Peg " << peg << ": ";
        for (int spot = 0; spot < peg_capacity; spot++) {
            int index = peg * peg_capacity + spot;
            std::cout << pegs[index] << " ";
        }
        std::cout << std::endl;
    }
}

int index_of_top_disc(int pegs[NUM_SPOTS], int bottom_index, int top_index) {

    for (int i = bottom_index; i < top_index; i++) {
        if (pegs[i] == 0)
            return (i - 1);
    }
    return top_index - 1;

}

int index_of_empty_spot(int pegs[NUM_SPOTS], int bottom_index, int top_index) {

    for (int i = bottom_index; i < top_index; i++) {
        if (pegs[i] == 0)
            return i;
    }
    return top_index;

}

void move(int pegs[NUM_SPOTS], int from_peg, int to_peg) {

    // Find location of topmost disc on from_peg:
    int bottom_index = from_peg * NUM_DISCS;
    int top_index = bottom_index + NUM_DISCS;
    int from_disc = index_of_top_disc(pegs, bottom_index, top_index);
    int size_of_disc = pegs[from_disc];  // save that disc size
    pegs[from_disc] = 0;       // move that disc from this spot

    // Find location where we want to place that disc:
    bottom_index = to_peg * NUM_DISCS;
    top_index = bottom_index + NUM_DISCS;
    int to_disc = index_of_empty_spot(pegs, bottom_index, top_index);
    pegs[to_disc] = size_of_disc;  // place moved disc here

    // std::cout << std::endl;
    // std::cout << "Move " << size_of_disc << " from Peg " << from_peg;
    // std::cout << " to Peg " << to_peg << std::endl;

    // print(pegs);

}

void solve(int pegs[NUM_SPOTS], int num_discs, int from_peg, int via_peg, int to_peg) {

    // std::cout << "solving " << num_discs << " discs from peg " << from_peg;
    // std::cout << " via peg " << via_peg << " to peg " << to_peg << std::endl;
    // std::cin.get();

    if (num_discs == 1) {
        std::cout << "Move 1 from peg " << from_peg << " to peg " << to_peg << std::endl;
        move(pegs, from_peg, to_peg);
        print(pegs);
        return;
    }

    solve(pegs, num_discs - 1, from_peg, to_peg, via_peg);
    std::cin.get();
    std::cout << "Move " << num_discs << " from peg " << from_peg << " to peg " << to_peg;
    std::cout << std::endl;
    move(pegs, from_peg, to_peg);
    print(pegs);
    solve(pegs, num_discs - 1, via_peg, from_peg, to_peg);
    std::cin.get();

    // if (num_discs == 1) {
    //     std::cout << "Move 1 from " << from_peg << " to " << to_peg << std::endl;
    //     move(pegs, from_peg, to_peg);
    //     print(pegs);
    //     return;
    // }
    //
    // solve(pegs, num_discs - 1, from_peg, to_peg, via_peg);
    // std::cout << "Move " << num_discs << " from " << from_peg << " to " << to_peg;
    // std::cout << std::endl;
    // move(pegs, from_peg, to_peg);
    // print(pegs);
    // solve(pegs, num_discs - 1, via_peg, from_peg, to_peg);

}

int main() {

    int pegs[NUM_SPOTS] = {4, 3, 2, 1};
    print(pegs);
    solve(pegs, 4, 0, 1, 2);

    return 0;
}
