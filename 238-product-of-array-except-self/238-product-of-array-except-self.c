

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    
    int* res = (int*)calloc(numsSize, sizeof(int));
    *returnSize = numsSize;
    
    int prefix = 1;
    //Prefix
    for(int i = 0; i < numsSize; i++){  
        res[i] = prefix;
        prefix *= nums[i];
    }
    
    int postfix = 1;
    //Postfix and results
    for(int i = numsSize-1; i >= 0; i--){
        res[i] *= postfix;
        postfix *= nums[i];
    }

    
    return res;
}