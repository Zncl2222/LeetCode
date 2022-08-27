class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        
        generate(0, 0, n, "", res);
        
        return res;
    }
private:
    
    void generate(int open, int close, int n, string s, vector<string>& res){
        
        if(open == close && close == n){
            res.push_back(s);
            return;
        }
        if(open < n){
            generate(open + 1, close, n, s + '(', res);
        }
        if(open > close){
            generate(open, close + 1, n, s + ')', res);
        }
        
    }
    
};