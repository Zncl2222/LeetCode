void swap(char* s, int idx1, int idx2){
    
    char* temp=s[idx1];
    s[idx1]=s[idx2];
    s[idx2]=temp;
    
}

char * reverseWords(char * s){
    
    int* space_idx=(int*)malloc(strlen(s)*sizeof(int));
    
    int count=0;
    
    for (int i=0; i<strlen(s); i++){
        
        if(s[i]==' '){
            
            space_idx[count++]=i;
            
        }
    }

    space_idx[count]=strlen(s);
    
    
    int low=0, high, times;
    
    for(int i=0; i<=count; i++){
        
        high=space_idx[i]-1;

        while(low<high){
            
            if(low!=high){
                swap(s,low,high);
                high--;
                low++;
            }
            
        }
        
        low=space_idx[i]+1;
        
    }
    
    return s;

}