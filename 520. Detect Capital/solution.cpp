class Solution {
public:
    bool detectCapitalUse(string word) {
        if (all_of(word.begin(), word.end(), ::isupper)) {
            return true;
        }
        
        if (all_of(word.begin(), word.end(), ::islower)) {
            return true;
        }
        
        if (isupper(word[0]) && all_of(word.begin() + 1, word.end(), ::islower)) {
            return true;
        }
        
        return false;
    }
};