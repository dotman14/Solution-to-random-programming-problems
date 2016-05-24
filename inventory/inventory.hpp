#ifndef inventory_hpp
#define inventory_hpp

#include <iostream>
#include <vector>
#include <string>
#include "product.hpp"

class Inventory{
public:
    Inventory();
    void insert(Products& prod);
    bool exist(std::string id) const;
    void show() const;
    int  countQuantity() const;
    void increaseQuantity(std::string id, int quantity);
    void decreaseQuantity(std::string id, int quantity);
    
private:
    vector<Products> productInventory;
};

#endif /* inventory_hpp */
