class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 > n2)
            return false;
        
        vector<int> count(26);
        
        for(int i = 0; i < n1; i++){
            
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }
        
        if(isPermutation(count))
            return true;
        
        for(int i = n1; i < n2; i++){
            
            count[s2[i]-'a']--;
            count[s2[i-n1]-'a']++;
            
            if(isPermutation(count))
                return true;
        }
        
        return false;
    }
    
private:
    
    bool isPermutation(vector<int> count){
        
        for(int i = 0; i < count.size(); i++){
            if(count[i] != 0)
                return false;
        }
        return true;
    }
};