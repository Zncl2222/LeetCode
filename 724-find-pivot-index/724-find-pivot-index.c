

int pivotIndex(int* nums, int numsSize){
    
    int leftsum = 0;
    int rightsum = 0;
    int pivot = 0;
    int flag = 0;
    for(int i = 0; i < numsSize; i++){

        if(flag == 0){
            
            for(int j = 0; j < pivot; j++){

                leftsum += nums[j];
            }

            for(int j = pivot + 1; j < numsSize; j++){

                rightsum += nums[j];
            }
            ++flag;
        }
        else{
        
            leftsum += nums[pivot - 1];
            rightsum -= nums[pivot];
        }

        if(leftsum == rightsum)
            return pivot;
        
        ++pivot;
        
    }
    
    return -1;
}