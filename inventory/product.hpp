#ifndef product_hpp
#define product_hpp

#include <iostream>
#include <string>
using namespace std;

class Products{
private:
    float price;
    int quantity;
    string id;
    
public:
    Products();
    Products(string id, float price, int quantity);
    
    string getId() const;
    float  getPrice() const;
    int    getQuantity() const;
    void   setQuantity(int id);
};

#endif /* product_hpp */
