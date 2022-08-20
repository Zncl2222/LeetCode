class Solution {
public:
    string minWindow(string s, string t) {
        
        int left = 0;
        int right = 0;
        
        unordered_map<char, int> t_table;
        
        for(int i = 0; i < t.size(); i++){
            t_table[t[i]]++;    
        }
        
        int counter = t.size();
        
        int minStart = 0;
        int minLength = INT_MAX;
        
        while(right < s.size()){
            
            if(t_table[s[right]] > 0)
                counter--;
            
            t_table[s[right]]--;
            
            right++;
            
            while(counter == 0){
                
                if(right - left < minLength){
                    minStart = left;
                    minLength = right - left;
                }
                
                t_table[s[left]]++;
                
                if(t_table[s[left]] > 0)
                    counter++;
                    
                left++;
            }

        }
                    
        if(minLength != INT_MAX)
            return s.substr(minStart, minLength);
        
        return "";
    }
};