class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        
        int length = s.length();

        for (int rotationCount = 0; rotationCount < length; ++rotationCount) {
            rotate(s.begin(), s.begin() + 1, s.end());
            if (s == goal) return true;
        }
        
        return false;
    }
};