class Solution {
public:
    bool isPalindrome(string s) {
        
        string t;
        
        for(int i = 0; i < s.size(); i++){
            
            if(isalnum(s[i]) != 0 ){
                t += tolower(s[i]);
            }   
        }
        
        int head = 0;
        int tail = t.size() - 1;

        while(head < tail){
            
            if(t[head] != t[tail]){
                return false;
            }
            head++;
            tail--;
        }
        
        return true;
    }
};