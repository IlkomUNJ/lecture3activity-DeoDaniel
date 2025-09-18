#include <iostream>
#include "bank_customer.h"
#include "buyer.h"

using namespace std;

int main() {
    class Seller {
        private:
            int id;
            std::string name;
            std::string email;
        
        public:
            Seller(int id, const std::string& name, const std::string& email)
                : id(id), name(name), email(email) {}

            int getId() const { return id; }
            std::string getName() const { return name; }
            std::string getEmail() const { return email; }

            void setName(const std::string& newName) { name = newName; }
            void setEmail(const std::string& newEmail) { email = newEmail; }
    };

    class Item {
    private:
        int id;
        std::string name;
        double price;
        int quantity;
    public:
        Item(int id, const std::string& name, double price, int quantity)
            : id(id), name(name), price(price), quantity(quantity) {}

        void setPrice(double newPrice) {
            price = newPrice;
        }

        void setQuantity(int newQuantity) {
            quantity = newQuantity;
        }

        void setName(const std::string& newName) {
            name = newName;
        }

        void updateAll(int itemId, const std::string& newName, double newPrice, int newQuantity) {
            if (id == itemId) {
                name = newName;
                price = newPrice;
                quantity = newQuantity;
            }
        }
    };
}

