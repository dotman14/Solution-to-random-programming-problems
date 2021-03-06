#include <iostream>
#include <vector>
#include <iterator>
#include <map>

const int ALPHABET_SIZE = 26;

/**
 *  This function pairs alphabets with ciphers.
 *
 *  @param alphabet                    This is a char vector containing standard alphabet from a-z. Lowercase
 *  @param cipher                      This is a char vector containing alphabets, after performing left rotation.
 *  @param map<char,char> alphaCipher  Map pairing standard alphabet with their corresponding cipher.
 *  @param shift                       This is the number of left rotation to be made by the program
 */
void prepareCipherText(std::vector<char> &alphabet, std::vector<char> &cipher, std::map<char, char> &alphaCipher, int shift);

/**
 *  This function reverses the KEY:VALUE pair in a map.
 *  There is no standard implementation for bidirectional maps in C++ STL, so you have to make a reverse pairing
 *  to read key from value, in case of decrypting a cipher text.
 *  P.S. Boost C++ Library has bi-directional map functionality.
 *
 *  @param map<char,char> alphaCipher  Map pairing standard alphabet with their corresponding cipher.
 *  @param map<char,char> reverse      Reverse paring for alphaCipher map.
 */
void reverseMap(std::map<char, char> &alphaCipher, std::map<char, char> &reverse);

/**
 *  This function reads string from getline and returns it to either enryption/decryption
 *
 *  @return string
 */
std::string getString();

int main(int argc, const char * argv[]) {
    
    int shift;
    std::string test;
    char response;
    
    std::cout << "Encrypt(e,E) / Decrypt(d, D): ";
    std::cin >> response;
    
    std::cout << "Shift alphabet by how many digits: ";
    std::cin  >> shift;
    
    std::vector<char> alphabets(ALPHABET_SIZE), cipher(ALPHABET_SIZE);
    std::map<char, char> alphaCipher, reverse;
    
    prepareCipherText(alphabets, cipher, alphaCipher, shift);
    
    if(response == 'e' || response == 'E'){
         test = getString();
        for (int i = 0; i < test.size(); i++)
            std::cout << alphaCipher.find(test[i])->second;
    }
    
    else if (response == 'd' || response == 'D'){
        reverseMap(alphaCipher, reverse);
        test = getString();
        for (int i = 0; i < test.size(); i++)
            std::cout << reverse.find(test[i])->second;
    }
    else
        std::cout << "Wrong response. Try again";
    
    return 0;
}

void prepareCipherText(std::vector<char> &alphabets, std::vector<char> &cipher, std::map<char, char> &alphaCipher, int shift)
{
    for(int i = 0; i < 26; i++){
        alphabets.push_back((char)(97 + i));
    }
    
    for(int j = shift; j < 26; j++){
        cipher.push_back((char)(97 + j));
    }
    
    for(int j = 0; j < shift; j++){
        cipher.push_back((char)(97 + j));
    }
    
    if (alphabets.size() == cipher.size()){
        for (size_t i = 0; i < alphabets.size(); ++i)
            alphaCipher[alphabets[i]] = cipher[i];
        
        alphaCipher.insert ( std::pair<char,char>(' ',' ') );
    }
    else
        std::cout << "Size is different";
}

void reverseMap(std::map<char, char> &alphaCipher, std::map<char, char> &reverse){
    for (std::map<char, char>::iterator iter = alphaCipher.begin(); iter != alphaCipher.end(); ++iter)
        reverse.insert ( std::pair<char,char>(iter->second, iter->first) );
}

std::string getString(){
    std::string clearText;
    std::cin.ignore();
    std::cout << "Enter text you want to translate: ";
    std::getline(std::cin, clearText);
    
    return clearText;
}
