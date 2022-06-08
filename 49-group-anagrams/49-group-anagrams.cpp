class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> table;
        vector<vector<string>> res;
        
        for(int i = 0; i < strs.size(); i++){
            
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            table[temp].push_back(strs[i]);
            
        }
        
        for(auto item : table){
            
            res.push_back(item.second);
        }
        
        return res;
    }
};