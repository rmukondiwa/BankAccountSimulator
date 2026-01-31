#include <iostream>
#include "Account.h"

using namespace std;


        void Account::registerAccount()
        {
                string name;
                string password;

                cout << "Enter your name:\n";
                cin >> name;
                cout << "Enter your Password:\n";
                cin >> password;

                accounts.insert({name, password});
                balances.insert({name, 0});

                cout << "Successfully created account for: " << name;
        }

        bool Account::accountExists(string accountName)
        {
            if (accounts.find(accountName) != accounts.end())
            {
                return false;
            }

            return true;
        }

        int Account::getBalance(string accountName)
        {
            if (!accountExists(accountName))
            {
                cout << "No account found";
                return 0;
            }

            return balances[accountName];
        }

        int Account::deposit (string accountName, int amount)
        {
            if (!accountExists(accountName))
            {
                cout << "No account found";
                return 0;
            }

            balances[accountName] += amount;
            return 0;
        }

        int Account::withdraw(string accountName, int amount)
        {
            if (!accountExists(accountName))
            {
                cout << "No account found!";
                return 0;
            }
            if (amount> getBalance(accountName))
            {
                cout << "Insufficient funds!";
                return 0;
            }

            balances[accountName] -= amount;

            return 0;
        }

        int Account::send(string fromAccount, string toAccount, int amount)
        {
            if (!accountExists(fromAccount) || !accountExists(toAccount))
            {
                cout << "No account found";
                return 0;
            }
            if (amount> getBalance(fromAccount))
            {
                cout << "Insufficient funds!";
                return 0;
            }
            
            deposit(toAccount, amount);
            withdraw(fromAccount, amount);

            return 0;
        }