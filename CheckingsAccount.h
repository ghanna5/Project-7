#include "account.h"

#ifndef CHCECKINGSACCOUNT_H
#define CHECKINGSACCOUNT_H

class CheckingsAccount : public Account
{
public:
    CheckingsAccount(double, double);

    double feeAmount(double);
    bool debit(double);
    bool credit(double);

private:
    double FeeCharged;
};

#endif