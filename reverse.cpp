#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    cout << "Enter String :\n";
    getline(cin, str);
    
    reverse(begin(str), end(str));
    cout << str;
    
    return 0;
}
