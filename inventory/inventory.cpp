#include "inventory.hpp"
#include <iostream>
#include <string>

Inventory::Inventory() : productInventory(0){};

void Inventory::insert(Products &prod){
    if(!exist(prod.getId()))
        productInventory.push_back(prod);
    else
        std::cout << "This product exist in inventory";
}

bool Inventory::exist(std::string id) const{
    for(int i = 0; i < productInventory.size(); i++){
        if(productInventory.at(i).getId() == id)
            return true;
    }
    return false;
}

void Inventory::show() const{
    std::cout << "Size of Inventory is " << productInventory.size() << " \n" ;
    for (int i = 0; i < productInventory.size(); i++) {
        std::cout << productInventory.at(i).getId() << " " << productInventory.at(i).getPrice() << " " << productInventory.at(i).getQuantity();
        std::cout << endl;
    }
}

int Inventory::countQuantity() const{
    int total = 0;
    for (int i = 0; i < productInventory.size(); i++) {
        total += productInventory.at(i).getQuantity();
    }
    return total;
}

void Inventory::increaseQuantity(std::string id, int quantity){
    if(!exist(id))
        std::cout << "We do not have \"" << id << "\" in stock.";
    for(int i = 0; i < productInventory.size(); i++){
        if(productInventory.at(i).getId() == id && (quantity >= 0))
            productInventory.at(i).setQuantity(productInventory.at(i).getQuantity() + quantity);
    }
}

void Inventory::decreaseQuantity(std::string id, int quantity){
    if(!exist(id))
        std::cout << "We do not have \"" << id << "\" in stock.";
    for(int i = 0; i < productInventory.size(); i++){
        if(productInventory.at(i).getId() == id && (productInventory.at(i).getQuantity() - quantity < 0))
            std::cout << "Quantity of \"" << id << "\" is very low";
        
        else if(productInventory.at(i).getId() == id && (productInventory.at(i).getQuantity() - quantity >= 0))
            productInventory.at(i).setQuantity(productInventory.at(i).getQuantity() - quantity);
    }
}
