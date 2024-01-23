class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> s_map;
        unordered_map<char, vector<int>> t_map;
        
        for (int i = 0; i < s.size(); i++) {
            s_map[s[i]].push_back(i);
            t_map[t[i]].push_back(i);
            
            if (s_map[s[i]] != t_map[t[i]]) {
                return false;
            }
        }
        return true;
    }
};