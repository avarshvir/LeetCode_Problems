class Solution {
public:
    string removeStars(string s){
        stack<char> c;
        for(auto i: s){
            c.push(i);
            if(i == '*'){
                c.pop();
                c.pop();
            }
        }
        string s2;
        while(!c.empty()){
            s2 += c.top();
            c.pop(); 
        }
        reverse(s2.begin(), s2.end());

        return s2;
    }
}