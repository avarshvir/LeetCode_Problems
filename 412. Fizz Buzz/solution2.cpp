class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> res;
        int i = 1, fizz = 0, buzz = 0;

        while (i <= n) {
            fizz++;
            buzz++;

            if (fizz == 3 && buzz == 5) {
                res.push_back("FizzBuzz");
                fizz = buzz = 0;
            } else if (fizz == 3) {
                res.push_back("Fizz");
                fizz = 0;
            } else if (buzz == 5) {
                res.push_back("Buzz");
                buzz = 0;
            } else {
                res.push_back(std::to_string(i));
            }

            i++;
        }

        return res;
    }
};