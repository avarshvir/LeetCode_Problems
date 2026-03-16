class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        //finding larger value
        int max_value = *max_element(nums.begin(), nums.end());
        int max_index = 0 ;
        //finding index
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == max_value){
                max_index = i;
                break;
            }
        }
        //
        for(int i = 0; i < nums.size(); i++){
            if(i != max_index && max_value < 2 * nums[i]){
                return -1;
            }
        }
        return max_index;
    }
};