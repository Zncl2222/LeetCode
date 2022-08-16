# define MAX(a,b) (a>b?a:b)

int length(char* s){
    
    int i = 0;
    
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

int characterReplacement(char * s, int k){
    
    int max_count = 0;
    int res = 0;
    
    int left = 0;
    int right = 0;
    int s_length = length(s);
    int* count = (int*)calloc(26, sizeof(int));
    
    while(right < s_length){
        
        count[s[right]-'A']++;
        max_count = MAX(max_count, count[s[right]-'A']);
        
        if(right - left + 1 - max_count > k){
            count[s[left]-'A']--;
            left++;
        }
        
        res = MAX(res, right - left + 1);
        right++;   
    }
    
    return res;
    
}