class Solution {
public:
    int mirrorDistance(int n) {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int n1 = stoi(s);
        int res = abs(n - n1);
        return res;
    }
};