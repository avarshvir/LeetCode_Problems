class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0;
        int maxAlt = 0;
        for(int i = 0; i < gain.size(); i++){
            current += gain[i];
            maxAlt = max(maxAlt, current);
        }
        return maxAlt;
    }
};