class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        
        string a = strs[0];
        
        for (int i = 0; i < a.length(); i++) {
            for (string s : strs) {
                if (i >= s.length() || s[i] != a[i]) {
                    return a.substr(0, i);
                }
            }
        }
        
        return a;
    }
};