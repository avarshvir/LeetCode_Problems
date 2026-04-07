class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> um;

        for(auto num : nums){
            um[num]++;
        }

        for(auto it : nums){
            if(it.second == 1){
                return it.first;
            }
        }

        return -1;
    }
};