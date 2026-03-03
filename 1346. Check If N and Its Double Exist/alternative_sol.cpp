class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
        
        for (int x : arr) {
            if (seen.count(2 * x)) {
                return true;
            }
            
            if (x % 2 == 0 && seen.count(x / 2)) {
                return true;
            }
            
            seen.insert(x);
        }
        
        return false;
    }
};