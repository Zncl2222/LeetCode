

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int temp;
    int* solutions=(int*)malloc(2*sizeof(int));
    
    for (int i=0;i<numsSize;i++){
        
        for (int j=i+1;j<numsSize;j++){
            
            temp=nums[i]+nums[j];
            
            if (temp==target){
                
                solutions[0]=i;
                solutions[1]=j;
                
                return solutions;
            }
            
        }
        
    }
    
    return solutions;
}