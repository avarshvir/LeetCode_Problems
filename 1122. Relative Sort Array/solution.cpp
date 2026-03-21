class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001, 0);
        for(int i = 0; i < arr1.size(); i++){
            freq[arr1[i]]++;
        }

        vector<int> result;

        for(int i = 0; i < arr2.size(); i++){
            int num = arr2[i];
            while(freq[num] > 0){
                result.push_back(num);
                freq[num]--;
            }
        }

        for(int i = 0; i <= 1000; i++){
            while(freq[i] > 0){
                result.push_back(i);
                freq[i]--;
            }
        }

        return result;
    }
};