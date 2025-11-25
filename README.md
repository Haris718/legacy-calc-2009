\# Legacy Loan Calculator 2009



This is a simple C++ loan/EMI (Equated Monthly Installment) calculator.  

It calculates monthly payments, total interest, and remaining balance for a loan based on user input.



---



\## Project Overview

\- Reads loan amount, annual interest rate, and tenure (in months) from the command line or configuration file.

\- Calculates EMI using standard financial formula.

\- Shows total interest and balance over time.

\- Improved version with input validation, bug fixes, and refactored code.



---



\## Prerequisites / Tools

\- C++ compiler (g++) supporting C++11

\- Git

\- GoogleTest (for unit testing)

\- Doxygen (for documentation, optional)



---



\## Build Instructions



\### Using g++ (console):

```bash

g++ -std=c++11 src/\*.cpp -o calc



