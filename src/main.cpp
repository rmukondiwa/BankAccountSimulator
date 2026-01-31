#include <iostream>
#include <unordered_map>
#include "Account.h"

using namespace std;

class BankApp
{

    public: Account account;

    void run()
    {
        int userInput;
        int amount;
        string userSelection;
        string accountName;
        string toAccountName;
        string password;

        cout << "Welcome to Mukondiwa Bank!\n"
        << "To create an account, enter: 1\n"
        << "Continue, enter: 2\n";

        cin >> userInput;

        if (userInput == 1)
        {
            account.registerAccount();
        }
        else if (userInput == 2)
        {
            cout << "Type and Enter option: \n"
                << "BALANCE\n"
                 << "WITHDRAW\n"
                << "DEPOSIT\n"
                << "TRANSFER\n";
            
            cin >> userSelection;

            if (userSelection == "BALANCE")
            {
                cout << "Type Account Name: ";
                cin >> accountName;

                account.getBalance(accountName);
                
                cout << "ACCOUNT BALANCE: " << account.getBalance(accountName);
            }
            else if (userSelection == "WITHDRAW")
            {
                cout << "Type Account Name: ";
                cin >> accountName;
                cout << "Type amount: ";
                cin >> amount;

                account.withdraw(accountName, amount);
            }
            else if (userSelection == "DEPOSIT")
            {
                cout << "Type Account Name: ";
                cin >> accountName;
                cout << "Type amount: ";
                cin >> amount;

                account.deposit(accountName, amount);
            }
            else if (userSelection == "TRANSFER")
            {
                cout << "Your Account Name: ";
                cin >> accountName;
                cout << "Sending to Account Name: ";
                cin >> toAccountName;
                cout << "Type amount: ";
                cin >> amount;

                account.send(accountName, toAccountName, amount);
            }

        cout << "Activity Done!";
    }
}
};

int main ()
{
    BankApp app;
    app.run();

    return 0;
}