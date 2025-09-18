#include "bank_customer.h"
#include <iostream>
#include <string>

string BankCustomer::getName() const {
    return this->name;
}

int BankCustomer::getId() const {
    return this->id;
}
double BankCustomer::getBalance() const {
    return this->balance;
}

void BankCustomer::setBalance(const double amount) {
    this->balance = amount;
}

void BankCustomer::addBalance(double amount) {
    this->balance += amount;
}

bool BankCustomer::withdrawBalance(double amount) {
    if (amount > this->balance) {
        std:cout << "Rejected: Insufficient balance!" << std::endl;
        return false;
    }   
    this->balance -= amount;
    return true;
}
void BankCustomer::printInfo() const {
    std::cout << "Customer Name:" << this->name << std::endl;
    std::cout << "Customer ID:" << this->id << std::endl;
    std::cout << "Balance: $" << this->balance << std::endl;
}