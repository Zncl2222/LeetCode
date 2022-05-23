

int firstUniqChar(char * s){
    int temp[26]={0};
    
    for(int i = 0; i < strlen(s); i++){
        
        temp[s[i]-'a']++;
        
    }
    
    for(int i = 0; i < strlen(s); i++){
        
        if(temp[s[i]-'a']==1)
            return i;
    }
    
    return -1;
}