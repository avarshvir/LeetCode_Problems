class Solution{
public:
    int removeDuplicate(vector<int>& nums){
        if(nums.empty()){
            return 0;
        }
        int k = 1;
        for (int i = 0 ; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                ++k;
            }
        }
        return k;
    }
};