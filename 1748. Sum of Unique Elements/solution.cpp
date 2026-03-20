class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans = 0;

        for(int x : nums){ 
            m[x]++;
        }

        for(auto x : m) {
            if(x.second == 1) {
                ans += x.first;
            }
        }
        return ans;

    }
};