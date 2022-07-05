class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> s_table;
        unordered_map<char, char> t_table;
        
        for(int i = 0; i < s.length(); i++){
            
            if(s_table.find(s[i]) == s_table.end() && t_table.find(t[i]) == t_table.end()){
                
                s_table[s[i]] = t[i];
                t_table[t[i]] = s[i];
            }
            else{
                
                if(s_table.find(s[i]) != s_table.end() && s_table[s[i]] != t[i])
                    return false;
                if(t_table.find(t[i]) != t_table.end() && t_table[t[i]] != s[i])
                    return false;
            }
            
        }
        return true;
    }
};