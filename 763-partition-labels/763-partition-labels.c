

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

# define MAX(a,b) (a>b?a:b)

int* partitionLabels(char * s, int* returnSize){
    
    int table[26] = {0};
    *returnSize = 0;
    
    int* res = (int*)malloc(26*sizeof(int));

    for(int i = 0; s[i] != '\0'; i++){
        
        table[s[i]-'a'] = i;
    }
    
    int end = 0, start = 0;

    for(int i = 0; s[i] != '\0'; i++){
        
        end = MAX(end, table[s[i]-'a']);
        
        if(end == i){
            
            res[(*returnSize)++] = end - start + 1;
            start = end + 1;
        }
        
    }
    
    return res;

}