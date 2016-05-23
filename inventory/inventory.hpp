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
    bool exist(string id) const;
    void show() const;
    int  countQuantity() const;
    void increaseQuantity(string id, int quantity);
    void decreaseQuantity(string id, int quantity);
    
private:
    vector<Products> productInventory;
};

#endif /* inventory_hpp */
