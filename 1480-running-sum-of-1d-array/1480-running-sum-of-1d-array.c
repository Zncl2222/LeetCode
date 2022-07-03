/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int sum(int* nums, int current ,int numsSize){
    
    if(current == 0)
        return nums[0];
    
    return nums[current] + sum(nums, current - 1, numsSize);
}

int* runningSum(int* nums, int numsSize, int* returnSize){
    
    *returnSize = numsSize;
    int* res = (int*)malloc(numsSize*sizeof(int));
    int current = 0;
    
    for(int i = 0; i < numsSize; i++){
        
        res[numsSize-1-i] = sum(nums, numsSize-i-1, numsSize);
        
    }
    
    return res;

}