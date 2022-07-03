

int pivotIndex(int* nums, int numsSize){
    
    int leftsum ;
    int rightsum;
    int pivot = 0;
    for(int i = 0; i < numsSize; i++){
        
        leftsum = 0;
        rightsum = 0;
    
        for(int j = 0; j < pivot; j++){
            
            leftsum += nums[j];
            
        }
        
        for(int j = pivot + 1; j < numsSize; j++){
            
            rightsum += nums[j];
        }

        if(leftsum == rightsum)
            return pivot;
        
        ++pivot;
        
        
    }
    
    return -1;
}