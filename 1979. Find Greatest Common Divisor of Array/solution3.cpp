class Solution {
public:

    int _gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int minimum = nums[0];
        int maximum = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < minimum){
                minimum = nums[i];
            }
            if(nums[i] > maximum){
                maximum = nums[i];
            }
        }

        return _gcd(minimum, maximum);

    }
};