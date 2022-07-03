

int pivotIndex(int* nums, int numsSize){
    
    int leftsum = 0;
    int rightsum = 0;
    int pivot = 0;

    for(int j = 1; j < numsSize; j++){

        rightsum += nums[j];
    }
    
    for(int i = 1; i < numsSize; i++){
        
        ++pivot;
        if(leftsum == rightsum)
            return pivot - 1;
        leftsum += nums[pivot - 1];
        rightsum -= nums[pivot];
       
    }
    
    if(leftsum == rightsum)
        return numsSize - 1;
    
    return -1;
}