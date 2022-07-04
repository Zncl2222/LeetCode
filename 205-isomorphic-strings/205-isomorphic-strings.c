

bool isIsomorphic(char * s, char * t){
    
    char s_table[256] = {0};
    char t_table[256] = {0};
    int len = strlen(s);
    
    for(int i = 0; i < len; i++){
        
        if(s_table[s[i]] ==0 && t_table[t[i]] == 0){
            
            s_table[s[i]] = t[i];
            t_table[t[i]] = s[i];
            
        }
        else if(s_table[s[i]] != t[i] || t_table[t[i]] != s[i])
            return false;
        
        
    }
    
    return true;

}