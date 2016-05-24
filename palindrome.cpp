#include <iostream>
#include <algorithm>
#include <string>

int main(int argc, const char * argv[]) {
    
    std::string str, rStr;
    
    std::cout << "Enter String :\n";
    std::cin >> str;
    
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    rStr = str;
    std::reverse(begin(str), end(str));
    
    (rStr == str) ? std::cout << "Word is palindrone\n" : std::cout << "Word is not palindrone\n";
    
    return 0;
}
