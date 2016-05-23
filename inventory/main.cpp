#include <iostream>
#include "inventory.hpp"
#include "product.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Products php("PHP", 23, 10);
    Products java("JAVA", 23, 1);
    
    Inventory inv;
    inv.insert(php);
    inv.insert(java);
    cout << endl;
    inv.show();
    cout << endl;
    cout << "Total quantity of all products: " << inv.countQuantity();
    cout << endl;
    
    return 0;
}

