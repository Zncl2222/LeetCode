
bool canConstruct(char* ransomNote, char* magazine) {

    int r_len=strlen(ransomNote);
    int m_len=strlen(magazine);
    
    int alphabet[26]={0};
    
    for(int i=0; i<r_len; i++){
        
        alphabet[ransomNote[i]-'a']--;
        
    }
    
    for(int i=0; i<m_len; i++){
        
        alphabet[magazine[i]-'a']++;
        
    }
    
    for(int i=0; i<26; i++){
        
        if(alphabet[i]<0)
            return false;
    }
    
    return true;
}