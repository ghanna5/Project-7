#include <stdexcept>

#include "account.h"

Account::Account(double balance)
{
    if(balance < 0.0) throw std::invalid_argument("Error: Initial balance must be equal or greater than 0.");

    Balance = balance;
}

void Account::setBalance(double balance)
{
    if(balance < 0.0) throw std::invalid_argument("Error: Initial balance must be equal or greater than 0.");

    Balance = balance;
}

double Account::getBalance() const
{
    return Balance;
}

double Account::addAmount(double amount)
{
    Balance += amount;

    return Balance;
}

double Account::withdrawMoney(double amount)
{
    Balance -= amount;

    if(amount > Balance) throw std::out_of_range("Error: You cannot withdraw more money than you have");

    return Balance;
}