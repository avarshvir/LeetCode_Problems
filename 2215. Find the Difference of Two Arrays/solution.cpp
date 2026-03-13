class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        vector<int> res1, res2;

        for(int x : s1){
            if(!s2.count(x))
                res1.push_back(x);
        }

        for(int x : s2){
            if(!s1.count(x))
                res2.push_back(x);
        }

        return {res1, res2};
    }
};