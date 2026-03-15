class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        for(int i = 0; i < boxes.size(); i++){
            int operations = 0;
            for(int j = 0; j < boxes.size(); j++){
                if(boxes[j] == '1'){
                    operations += abs(i - j);
                }
            }    
            answer.push_back(operations);        
        }
        return answer;
    }
};