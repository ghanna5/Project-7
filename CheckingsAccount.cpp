#include "account.h"
#include "CheckingsAccount.h"

CheckingsAccount::CheckingsAccount(double balance, double fee) : Account(balance)
{
    FeeCharged = fee;
}

double CheckingsAccount::feeAmount(double fee)
{
    if(FeeCharged > 0) return fee;

    return 0;
}