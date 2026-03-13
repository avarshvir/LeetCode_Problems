class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res1;
        vector<int> res2;

        for(int i = 0; i < nums1.size(); i++){
            bool found = false;

            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
            }

            if(!found){
                bool duplicate = false;
                for(int k = 0; k < res1.size(); k++){
                    if(res1[k] == nums1[i]){
                        duplicate = true;
                        break;
                    }
                }

                if(!duplicate){
                    res1.push_back(nums1[i]);
                }
            }
        }

        for(int i = 0; i < nums2.size(); i++){
            bool found = false;

            for(int j = 0; j < nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    found = true;
                    break;
                }
            }

            if(!found){
                bool duplicate = false;
                for(int k = 0; k < res2.size(); k++){
                    if(res2[k] == nums2[i]){
                        duplicate = true;
                        break;
                    }
                }

                if(!duplicate){
                    res2.push_back(nums2[i]);
                }
            }
        }

        return {res1, res2};
    }
};