class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        
        vector<int> v(s.begin(), s.end());
        sort(v.rbegin(), v.rend()); 

        if(v.size() >= 3) {
            return v[2]; 
        } else {
            return v[0]; 
        }
    }
};