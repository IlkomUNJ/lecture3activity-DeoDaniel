#ifndef SELLER_H
#define SELLER_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Item {
public:
    std::string name;
    int quantity;
    double price;

    Item(const std::string& name, int quantity, double price)
        : name(name), quantity(quantity), price(price) {}
};

class Seller {
private:
    std::vector<Item> items;
    int bankBalance;
    int savingAmount;
    bool canReceivePayment;

public:
    Seller() : bankBalance(0), savingAmount(0), canReceivePayment(false) {}

    void addItem(const std::string& name, int quantity, double price) {
        items.emplace_back(name, quantity, price);
    }

    void displayItems() const {
        for (const auto& item : items) {
            std::cout << "Item: " << item.name
                      << ", Quantity: " << item.quantity
                      << ", Price: " << item.price << std::endl;
        }
    }

    void storeToBank(int amount) {
        if (amount > 0) {
            bankBalance += amount;
        }
    }

    bool withdrawFromBank(int amount) {
        if (amount > 0 && bankBalance >= amount) {
            bankBalance -= amount;
            return true;
        }
        return false;
    }

    void setSavingAmount(int amount) {
        if (amount >= 0) {
            savingAmount = amount;
        }
    }

    int getSavingAmount() const {
        return savingAmount;
    }

    int getBankBalance() const {
        return bankBalance;
    }

    void setCanReceivePayment(bool status) {
        canReceivePayment = status;
    }

    bool getCanReceivePayment() const {
        return canReceivePayment;
    }
};

#endif