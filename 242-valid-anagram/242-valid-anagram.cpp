class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> table;
        
        if(s.length()!=t.length())
            return false;
        
        for(int i=0; i<s.length(); i++){
            
            if(table.find(s[i])!=table.end())
                table[s[i]]++;
            else
                table[s[i]]={1};   
        }
        
        for(int i=0; i<t.length(); i++){
                       
            if(table.find(t[i])!=table.end())
                table[t[i]]--;
            else
                table[t[i]]={-1};   
        }
        
        for(auto i=table.begin(); i!=table.end(); i++){
            
            if(i->second < 0)
                return false;
            
        }
        
        return true;
    }
};