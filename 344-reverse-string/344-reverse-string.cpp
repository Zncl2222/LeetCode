class Solution {
public:
    
    
    void reverseString(vector<char>& s) {
        
        int end=s.size();
        
        for(int i=0; i<end; i++){
            
            swap(s[i],s[end-1]);
            
            end--;
            
        }
        
    }
};