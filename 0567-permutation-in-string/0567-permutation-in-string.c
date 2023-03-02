int len(char* s){
    int l = 0;
    while(s[l] != '\0'){
        ++l;
    }
    return l;
}

bool isPermutation(int* count, int len){
    
    for(int i = 0; i < len; i ++){
        if(count[i] != 0)
            return false;
    }
    return true;
}

bool checkInclusion(char * s1, char * s2){
    
    int n1 = len(s1);
    int n2 = len(s2);
    
    if(n1 > n2)
        return false;
    
    int* count = (int*)calloc(26, sizeof(int));
    
    for(int i = 0; i < n1; i++){
        
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    
    if(isPermutation(count, 26))
        return true;
    
    for(int i = n1; i < n2; i++){
        
        count[s2[i]-'a']--;
        count[s2[i-n1]-'a']++;
        
        if(isPermutation(count, 26))
            return true;
    }
    
    return false;
    
    
}