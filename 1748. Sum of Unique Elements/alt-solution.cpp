class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        set<int> seen;
        set<int> duplicates;

        for(int x : nums) {
            if(seen.count(x)) {
                duplicates.insert(x);
            } else {
                seen.insert(x);
            }
        }

        int ans = 0;
        for(int x : seen) {
            if(!duplicates.count(x)) {
                ans += x;
            }
        }

        return ans;
    }
};