class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count_neg = 0;
        int count_pos = 0;
        for(auto &i : nums){
            if(i < 0){
                count_neg++;
            }
        }
        
        for(auto &i : nums){
            if(i > 0){
                count_pos++;
            }
        }
        
        int result = max(count_neg, count_pos);

        return result;



    }
};