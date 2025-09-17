#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false; // Condition 1: Minimum length
        
        bool hasVowel = false;
        bool hasConsonant = false;
        
       for (int i = 0; i < word.length(); i++) {
    char c = word[i];
    
    // Now you can use c as in the original loop
    if (!isalnum(c)) {
        return false; // Invalid character
    }
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        hasVowel = true;
    }
    else if (isalpha(c)) {
        hasConsonant = true;
    }
}

        
        // Condition 3 and 4: at least one vowel and one consonant
        return hasVowel && hasConsonant;
    }
};

