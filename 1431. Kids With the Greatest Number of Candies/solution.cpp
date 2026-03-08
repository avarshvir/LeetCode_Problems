class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int c_max_candies = *max_element(begin(candies),end(candies));
        vector<bool> result(candies.size());
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= c_max_candies){
                result[i] = true;
            }
            else{
                result[i] = false;
            }
        }

        return result;

    }
};