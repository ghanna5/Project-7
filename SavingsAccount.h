#include "account.h"

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount : public Account
{
public:
    SavingsAccount(double, double);

    double calculateInterest(double);
private:
    double InterestRate;
};

#endif