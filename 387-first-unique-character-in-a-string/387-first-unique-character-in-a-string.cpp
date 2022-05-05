# define MIN(a,b) a<b?a:b 

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,pair<int,int>> table;
        
        for(int i=0;i<s.length();i++){
            
            if(table.find(s[i])!=table.end())
                table[s[i]].second++;
            else
                table[s[i]]={i,1};
                
        }
        
        int min_idx = s.length();
        
        for( auto i = table.begin() ; i != table.end() ; i++ ){
            
            if(i->second.second==1)
                min_idx=MIN(min_idx,i->second.first);
        }
        
        if(min_idx>=s.length())
            min_idx=-1;
        
        return min_idx;        
    }
};