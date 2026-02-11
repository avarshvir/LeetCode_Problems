#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0; // total wealth for richest customer

        for (int i = 0; i < accounts.size(); i++) { // Lloop over customers
            int currentWealth = 0; // Piggy bank for this customer

            for (int j = 0; j < accounts[i].size(); j++) { // loop over banks
                currentWealth += accounts[i][j]; // add money from each bank
            }

            maxWealth = max(maxWealth, currentWealth); // update wealth if this customer is richer
        }

        return maxWealth; // return richest customer's wealth
    }
};

int main() {
    Solution sol;

    vector<vector<int>> accounts = {
        {1, 5},
        {7, 3},
        {3, 5}
    };

    int richest = sol.maximumWealth(accounts);
    cout << "Richest customer wealth: " << richest << endl;

    return 0;
}
