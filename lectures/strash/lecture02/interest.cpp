#include <iostream>

int main() {
    float daphne_original_balance = 100.0;
    float cleo_original_balance = 100.0;
    float daphne_interest_rate = 0.1;
    float cleo_interest_rate = 0.05;
    float daphne_current_balance = daphne_original_balance;
    float cleo_current_balance = cleo_original_balance;

    int year = 0;
    while (daphne_current_balance >= cleo_current_balance) {
        float daphe_interest = daphne_interest_rate * daphne_original_balance;
        float cleo_interest = cleo_interest_rate * cleo_current_balance;

        cleo_current_balance = cleo_current_balance + cleo_interest;
        daphne_current_balance = daphne_current_balance + daphe_interest;
        year = year + 1;
    }

    std::cout << "Number of years until Cleo has more money than Daphne: "
              << year << std::endl;

    return 0;
}
