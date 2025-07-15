
class Solution {
public:
    bool isValid(string word) {
        // Check if word length is at least 3
        if (word.length() < 3) {
            return false;
        }
        
        // Define sets for vowels and consonants
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        unordered_set<char> consonants;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (vowels.count(c) == 0) {
                consonants.insert(c);
                consonants.insert(c - 32);  // Adding uppercase letters as consonants
            }
        }
        
        // Initialize flags for vowels and consonants
        bool hasVowel = false;
        bool hasConsonant = false;
        
        // Iterate through each character in the word
        for (char c : word) {
            // Check if character is a letter or digit
            if (isalnum(c)) {
                // Check if character is a vowel
                if (vowels.count(c) > 0) {
                    hasVowel = true;
                }
                // Check if character is a consonant
                else if (consonants.count(c) > 0) {
                    hasConsonant = true;
                }
            }
            // If character is not a letter or digit, return false
            else {
                return false;
            }
        }
        
        // Check if both vowel and consonant are present
        return hasVowel && hasConsonant;
    }
};