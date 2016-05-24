#include <iostream>
#include <algorithm>
#include <string>

int main(int argc, const char * argv[]) {
    std::string str;
    std::cout << "Enter String :\n";
    std::getline(std::cin, str);
    
    std::reverse(begin(str), end(str));
    std::cout << str;
    
    return 0;
}
