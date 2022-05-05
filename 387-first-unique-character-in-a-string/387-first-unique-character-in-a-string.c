

int firstUniqChar(char * s){
    
    int temp[26]={0};
    int len=strlen(s);
    
    for(int i=0;i<len;i++){
        
        int alphabet=s[i]-'a';
        temp[alphabet]++;

    }
    
    for(int i=0;i<len;i++){

        int alphabet=s[i]-'a';
        
        if(temp[alphabet]==1)
            return i;
    }
    
    return -1;
}