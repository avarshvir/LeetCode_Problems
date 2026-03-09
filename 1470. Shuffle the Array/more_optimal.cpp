class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        for(int i = 0; i < n; i++){
            nums[i] |= (nums[i+n] << 10);
        }

        for(int i = n-1; i >= 0; i--){
            int xi = nums[i] & 1023;
            int yi = nums[i] >> 10;

            nums[2*i] = xi;
            nums[2*i+1] = yi;
        }

        return nums;
    }
};