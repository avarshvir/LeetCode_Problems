#include <numeric> // This gives us std::gcd()

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        
        for (int i = 0; i < n; i++) {
            sumOdd += (2 * i + 1);  
            sumEven += (2 * i + 2); 
        }
        
        return std::gcd(sumOdd, sumEven);
    }
};