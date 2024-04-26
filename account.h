#include <stdexcept>
// Account class with a constructor that initializes the account name.
#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   // constructor initializes data member name with parameter accountName
   explicit Account(double);

   // function to set the account name
   void setBalance(double);

   // function to retrieve the account name
   double getBalance() const;

   double addAmount(double);
   double withdrawMoney(double);

private:
   double Balance; // account name data member
};                   // end class Account

#endif