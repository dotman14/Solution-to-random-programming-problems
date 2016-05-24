#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string str, rStr;
    
    cout << "Enter String :\n";
    cin >> str;
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    rStr = str;
    reverse(begin(str), end(str));
    
    (rStr == str) ? cout << "Word is palindrone\n" : cout << "Word is not palindrone\n";
    
    return 0;
}
