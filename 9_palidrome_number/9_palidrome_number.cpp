class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int original = x;
        int reversed = 0;

        // Reverse only the second half of the number
        while (x > reversed) {
            int digit = x % 10;  // Extract the last digit
            reversed = reversed * 10 + digit;  // Append digit to the reversed number
            x /= 10;  // Remove the last digit from x
        }

        // Check if the original number is equal to the reversed number or reversed number without the last digit
        return x == reversed || x == reversed / 10;
    }
};
