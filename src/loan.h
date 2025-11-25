#ifndef LOAN_H
#define LOAN_H

class Loan {
private:
    long double loanAmount;
    long double interestRate;
    long double years;

public:
    Loan(long double amt, long double rate, long double yrs);
    long double getTotalAmount();
    long double getTotalInterest();
    long double getMonthlyPayment();
};

#endif
