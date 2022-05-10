bool count_check(int* L){
    
    for(int i=0; i<26; i++){ 
        if(L[i]!=0)
            return false;
    }
    return true;
}

bool checkInclusion(char * s1, char * s2){
    
    int len_s1=strlen(s1);
    int len_s2=strlen(s2);
    
    if(len_s1>len_s2)
        return false;
    
    int count[26]={0};
    
    for(int i=0; i<len_s1; i++){
        
        count[s1[i]-'a']++;
    }
    
    for(int i=0; i<len_s2; i++){
        
        count[s2[i]-'a']--;
        
        if(i-len_s1>=0)
            count[s2[i-len_s1]-'a']++;
        
        if(count_check(count))
            return true;
    }
    
    return false;
}