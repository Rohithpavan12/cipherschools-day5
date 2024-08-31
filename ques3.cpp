#include <iostream>
#include <string>

using namespace std;

void countVowelsAndConsonants(string str) {
    int vowels = 0, consonants = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++vowels;
        } else {
            ++consonants;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;
    
    countVowelsAndConsonants(inputString);
    return 0;
}
