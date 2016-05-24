#ifndef product_hpp
#define product_hpp

#include <iostream>
#include <string>

class Products{
private:
    float price;
    int quantity;
    std::string id;
    
public:
    Products();
    Products(std::string id, float price, int quantity);
    
    std::string getId() const;
    float  getPrice() const;
    int    getQuantity() const;
    void   setQuantity(int id);
};

#endif /* product_hpp */
