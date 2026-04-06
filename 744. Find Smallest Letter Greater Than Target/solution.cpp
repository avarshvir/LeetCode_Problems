// solution
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(), letters.end());
        for(char letter : letters){
            if(letter > target){
                return letter;
            }
        }
        return letters[0];
    }
};