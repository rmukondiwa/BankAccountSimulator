#include <iostream>
#include <unordered_map>
using namespace std;

class BankApp
{
    private: unordered_map<string,string> accounts;


public:
    void registerAccount()
    {
            string name;
            string password;

            cout << "Enter your name:\n";
            cin >> name;
            cout << "Enter your Password:\n";
            cin >> password;

            accounts.insert({name, password});

            cout << "Successfully created account for: " << name;
    }

    void createTransaction()
    {

    }

    void run()
    {
        int userInput;
        cout << "Welcome to Mukondiwa Bank!\n"
        << "To create an account, enter: 1\n"
        << "To create a transaction, enter: 2\n"
        << "To check balance, enter 3\n";

        cin >> userInput;

        if (userInput == 1)
        {
        registerAccount();
        }
        else
        {

        }

        createTransaction();

    }
};

int main ()
{
    BankApp app;
    app.run();

    return 0;
}