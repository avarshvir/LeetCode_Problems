class Solution {
public:
    int numberOfSpecialChar(string word) {
        unordered_set<char> lowers;
        unoredered_set<char> uppers;

        for (char c : word) {
            if(islower(c)) {
                lowers.insert(c);
            }
            else if(isupper(c)) {
                uppers.insert(c);
            }
        }

        int specialCount = 0;
        for(char c = 'a'; c <= 'z'; c++) {
            if(lowers.count(c) && uppers.count(toupper(c))) {
                specialCount++;
            }
        }

        return specialCount;
    }
};