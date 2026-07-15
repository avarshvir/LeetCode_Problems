clsclass Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        
        // Loop through every number from 1 up to n
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                // If the remainder is 0, the number is even
                sumEven += i;
            } else {
                // Otherwise, the number is odd
                sumOdd += i;
            }
        }
        
        // Return the Greatest Common Divisor of the two sums
        return std::gcd(sumOdd, sumEven);
    }
};