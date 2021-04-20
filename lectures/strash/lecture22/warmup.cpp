/**
 * Warmup for 4/20/2021
 * @file warmup.cpp
 * @author Darren Strash
 * @date April 20, 2021
 */
size_t func(const size_t n) {
    size_t count = 0;
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < 5; j++) {
            count++;
        }
    }
    return count;
}
