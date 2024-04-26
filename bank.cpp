#include <iostream>

#include "account.h"
#include "SavingsAccount.h"
#include "CheckingsAccount.h"

int main(int argc, char const *argv[])
{
    Account A = Account(100);
    SavingsAccount B = SavingsAccount(50, 10);
    CheckingsAccount C = CheckingsAccount(500, 35);
    
    std::cout << B.calculateInterest(0.05) << std::endl;
    std::cout << A.getBalance() << std::endl;
    std::cout << B.addAmount(5) << std::endl;
    std::cout << A.getBalance() << std::endl;
    std::cout << C.withdrawMoney(500) << std::endl;
    std::cout << A.getBalance() << std::endl;

    return 0;
}