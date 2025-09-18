#ifndef BANK_CUSTOMER_H
#define BANK_CUSTOMER_H

#include <string>

using namespace std;

class BankCustomer {
private:
    int id;
    string name;
    double balance;

public:
    BankCustomer(int id, const string& name, double balance)
        : id(id), name(name), balance(balance) {}

    int getId() const { return id; }
    string getName() const { return name; }
    double getBalance() const { return balance; }

    void printInfo() const;
    void setName(const string& newName) { name = newName; }
    void setBalance(double newBalance) { balance = newBalance; }
    void addBalance(double amount);
    bool withdrawBalance(double amount);
};

#endif // BANK_CUSTOMER_H