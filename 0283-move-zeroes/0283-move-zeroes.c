void moveZeroes(int* nums, int numsSize) {
    int zero_counts = 0;
    int curr_idx = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[curr_idx++] = nums[i];
        } else {
            zero_counts++;
        }
    }
    
    for(int i = numsSize - zero_counts; i < numsSize; i++) {
        nums[i] = 0;
    }
}