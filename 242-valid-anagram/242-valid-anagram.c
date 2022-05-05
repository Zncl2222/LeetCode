

bool isAnagram(char * s, char * t){

    int s_len=strlen(s);
    int t_len=strlen(t);
    
    if(s_len!=t_len)
        return false;
    
    int alphabet[26]={0};
    
    for (int i=0; i<s_len; i++){
        
        alphabet[s[i]-'a']++;
    }
    
    for (int i=0; i<t_len; i++){
        
        alphabet[t[i]-'a']--;
        
    }
    
    for(int i=0; i<26; i++){
        
        if(alphabet[i]<0)
            return false;
            
    }
    
    return true;
    
}