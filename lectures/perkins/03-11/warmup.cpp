
// Warmup: What will the output be?

#include <iostream>

int main() {          //     qp v
    int q = 8;        //        8___________
    // type * pointer_name = &variable_name
    int * qp = &q;
    // *qp dereferences qp
    std::cout << qp << std::endl;
    return 0;
}
