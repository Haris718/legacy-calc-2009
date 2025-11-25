#include "Loan.h"

Loan::Loan(long double amt, long double rate, long double yrs) {
    loanAmount = (amt > 0) ? amt : 0;
    interestRate = (rate > 0) ? rate : 0;
    years = (yrs > 0) ? yrs : 0;
}

long double Loan::getTotalAmount() {
    return loanAmount + (loanAmount * interestRate / 100.0) * years;
}

long double Loan::getTotalInterest() {
    return getTotalAmount() - loanAmount;
}

long double Loan::getMonthlyPayment() {
    return getTotalAmount() / (years * 12);
}
