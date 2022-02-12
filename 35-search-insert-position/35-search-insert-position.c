

int searchInsert(int* nums, int numsSize, int target){
    
    int index=0;
    
    for (int i=0;i<numsSize;i++){
        
        if (nums[i]>=target){
            return index;  
        }
        index++;
    }
    return numsSize;
}