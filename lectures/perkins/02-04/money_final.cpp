#include <iostream>

int main(){
    float daphne_principal = 100.0;
    float daphne_balance = 100.0;
    float daphne_interest = 0.10;
    float cleo_principal = 100.0;
    float cleo_balance = 100.0;
    float cleo_interest = 0.04;
    int final_year = 0;
    for (int year = 0; cleo_balance <= daphne_balance; year++) {
        std::cout << "Daphne Year " << year << ": " << daphne_balance << std::endl;
        daphne_balance += daphne_principal * daphne_interest;
        std::cout << "Cleo Year " << year << ": " << cleo_balance << std::endl;
        cleo_balance += cleo_balance * cleo_interest;
        final_year++;
    }
    std::cout << "Cleo's balance exceeds Daphne's in year " << final_year << std::endl;
    return 0;
}
