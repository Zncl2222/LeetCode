/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
    
    *returnSize = numsSize;
    int* res = (int*)malloc(numsSize*sizeof(int));
    int curr_sum = 0;
    
    for(int i = 0; i < numsSize; i++){
        
        curr_sum += nums[i];
        res[i] = curr_sum;
    }
    
    return res;
}