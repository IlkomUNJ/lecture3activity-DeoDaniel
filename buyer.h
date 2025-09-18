#ifndef BUYER_H
#define BUYER_H

#include <string>
#include "bank_customer.h"

using namespace std;

class Buyer {
private:
    int id;
    std::string name;
    BankCustomer &account;

public:
    Buyer (int id, string& name, BankCustomer &account): id(id), name(name), account(account){};

    int getId() const { return id; }
    string getName(int newId) { return name; }

    void setId(int newId) { id = newId; }
    void setName(const std::string& newName) { name = newName; }
};

#endif