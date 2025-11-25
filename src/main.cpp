#include <iostream>
#include <iomanip>
#include <fstream>
#include "Loan.h"

using namespace std;

int main() {
    long double loan_amount, interest_rate, years;

    ifstream config("config.txt");
    if(config.is_open()) {
        config >> loan_amount >> interest_rate >> years;
        config.close();
    } else {
        loan_amount = 100000;
        interest_rate = 12;
        years = 30;
    }

    cout << "Enter loan amount: ";
    cin >> loan_amount;
    while(loan_amount <= 0) {
        cout << "Loan amount must be positive. Enter again: ";
        cin >> loan_amount;
    }

    cout << "Enter interest rate (%): ";
    cin >> interest_rate;
    while(interest_rate <= 0) {
        cout << "Interest rate must be positive. Enter again: ";
        cin >> interest_rate;
    }

    cout << "Enter number of years: ";
    cin >> years;
    while(years <= 0) {
        cout << "Number of years must be positive. Enter again: ";
        cin >> years;
    }

    Loan loan(loan_amount, interest_rate, years);

    cout << fixed << setprecision(2);
    cout << "Total amount to be paid: " << loan.getTotalAmount() << endl;
    cout << "Total interest: " << loan.getTotalInterest() << endl;
    cout << "Monthly payment: " << loan.getMonthlyPayment() << endl;

    return 0;
}
