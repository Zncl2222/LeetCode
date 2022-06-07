class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int> table;
        vector<int> res;
        
        for(int i = 0; s[i] != '\0'; i++){
            
            table[s[i]] = i;
        }
        
        int start = 0, end = 0;
        
        for(int i = 0; s[i] != '\0'; i++){
            
            end = max(table[s[i]], end);
            
            if(end == i){
                
                res.push_back(end-start+1);
                start = end + 1;
            }
        }
        
        return res;
    }
};