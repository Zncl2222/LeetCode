int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    
    int* res=(int*)malloc(numsSize*sizeof(int));
    
    
    for(int i=0; i<numsSize; i++){
        
        res[i]=nums[i]*nums[i];    
    }
    
    for(int i=0; i<numsSize; i++){
        
        printf("%d ",res[i]);
        
    }   
 
    qsort(res,numsSize,sizeof(int),cmp);
    *returnSize=numsSize;
     
    return res;
}