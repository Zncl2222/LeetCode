# define MAX(a,b) (a>b?a:b)

int lengthOfLongestSubstring(char * s){

    int index[256], best=0, pre=-1;
    
    memset(index,-1,sizeof(index));
    
    for(int i=0; s[i]!='\0'; i++){
        
        pre=MAX(pre,index[s[i]]);
        best=MAX(best,i-pre);
        
        index[s[i]]=i;
    }
    
    return best;
}