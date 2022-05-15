class Solution {
public:
     
    void permutation(string s, int start, vector<string>&res){
        
        if(start == s.length()){
            
            res.push_back(s);
            return;
        }
        
        if(s[start] >= '0' && s[start] <= '9'){
            
            permutation(s, start+1, res);
        }
        else{
            
            permutation(s, start+1, res);

            if(s[start] >= 'a' && s[start] <= 'z')
                s[start] = 'A' + (s[start] - 'a');
            else if (s[start] >= 'A' && s[start] <= 'Z')
                s[start] = 'a' + (s[start] - 'A');

            permutation(s, start+1, res);
        }
        
    }

    
    vector<string> letterCasePermutation(string s) {
        
        vector<string>res;
        
        permutation(s, 0, res);
        
        return res;
    }
};