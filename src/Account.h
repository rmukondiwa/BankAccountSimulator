#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <unordered_map>

class Account {

private: std::unordered_map<std::string,std::string> accounts;
public: std::unordered_map<std::string,int> balances;

public:

    void registerAccount();
    bool accountExists(std::string accountName);
    int getBalance(std::string accountName);

    int deposit(std::string accountName, int amount);
    int withdraw(std::string accountName, int amount);

    int send(std::string fromAccount, std::string toAccount, int amount);
};

#endif