

int pivotIndex(int* nums, int numsSize){
    
    int leftsum = 0;
    int rightsum = 0;
    int pivot = 0;

    for(int j = pivot + 1; j < numsSize; j++){

        rightsum += nums[j];
    }
    
    if(leftsum == rightsum)
        return pivot;
    
    ++pivot;

    for(int i = pivot; i < numsSize; i++){

        leftsum += nums[pivot - 1];
        rightsum -= nums[pivot];

        if(leftsum == rightsum)
            return pivot;
        ++pivot;
    }
    
    return -1;
}