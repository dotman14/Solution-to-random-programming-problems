#include <iostream>
#include "inventory.hpp"
#include "product.hpp"

int main(int argc, const char * argv[]) {
    
    Products php("PHP", 23, 10);
    Products java("JAVA", 23, 1);
    
    Inventory inv;
    inv.insert(php);
    inv.insert(java);
    std::cout << std::endl;
    inv.show();
    std::cout << std::endl;
    std::cout << "Total quantity of all products: " << inv.countQuantity();
    std::cout << std::endl;
    
    return 0;
}

