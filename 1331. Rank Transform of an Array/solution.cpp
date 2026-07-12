class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> rank;
        int r = 1;

        for (int x : sorted) {
            if (rank.find(x) == rank.end()) {
                rank[x] = r++;
            }
        }

        for (int &x : arr) {
            x = rank[x];
        }

        return arr;
    }
};