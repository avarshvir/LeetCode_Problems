class Solution {
public:
    int mirrorDistance(int n) {
        int original = n;
        int reversed = 0;

        while (n != 0) {
            int remainder = n % 10;          
            reversed = reversed * 10 + remainder; 
            n /= 10;                        
        }
        int res = abs(original - reversed);
        return res;
    }
};