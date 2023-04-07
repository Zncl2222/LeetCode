class Solution {
public:
    bool isValid(string s) {
        
        stack<char> temp;
        
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                
                temp.push(s[i]);
            }
            else{
                
                if(temp.empty() == false){
                    
                    if(temp.top() == '(' && s[i] == ')')
                        temp.pop();
                    else if(temp.top() == '{' && s[i] == '}')
                        temp.pop();
                    else if (temp.top() == '[' && s[i] == ']')
                        temp.pop();
                    else
                        temp.push(s[i]);
                }
                else{
                    temp.push(s[i]);
                }
                    
            }
        }
        if(temp.empty() == true)
            return true;
        
        return false;
    }
};