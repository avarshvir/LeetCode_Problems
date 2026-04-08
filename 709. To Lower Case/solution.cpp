class Solution {
public:
    string toLowerCase(string s){
        for(char &c : s){
            c = toupper(c);
        }
        return s;       
    }
}