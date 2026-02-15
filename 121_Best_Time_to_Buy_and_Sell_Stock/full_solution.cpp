#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};

int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution sol;
    int result = sol.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}
