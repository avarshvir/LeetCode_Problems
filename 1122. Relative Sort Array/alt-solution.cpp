class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> pos;

        // Store positions of elements in arr2
        for(int i = 0; i < arr2.size(); i++){
            pos[arr2[i]] = i;
        }

        // Custom sort
        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            if(pos.count(a) && pos.count(b))
                return pos[a] < pos[b];
            if(pos.count(a))
                return true;
            if(pos.count(b))
                return false;
            return a < b;
        });

        return arr1;
    }
};