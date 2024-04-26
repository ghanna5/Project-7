#include <stdexcept>

#include "account.h"
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double balance, double interest) : Account(balance)
{
    InterestRate = interest;
}

double SavingsAccount::calculateInterest(double interest)
{
    InterestRate *= interest;

    return InterestRate;
}