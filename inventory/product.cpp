#include "product.hpp"
#include <iostream>
#include <string>
using namespace std;

Products::Products() : id("UNKNOWN"), price(0.00), quantity(0) {};
Products::Products(string id, float price, int quantity) : id(id), price(price), quantity(quantity) {};

string Products::getId() const{
    return id;
};

float Products::getPrice() const{
    return price;
};

int Products::getQuantity() const{
    return quantity;
};

void Products::setQuantity(int quantity){
    this->quantity = quantity;
}
