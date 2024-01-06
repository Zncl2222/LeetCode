func moveZeroes(nums []int)  {
    non_zero_val := 0
    curr_idx := 0
    for i := 0; i < len(nums); i++ {
        if nums[i] != 0 {
            non_zero_val++
        }
    }
    
    for i := 0; i < len(nums); i++ {
        if nums[i] != 0 && non_zero_val > 0 {
            nums[curr_idx] = nums[i]
            curr_idx++
        }
    }
    
    for i := non_zero_val; i < len(nums); i++ {
        nums[i] = 0
    }
}
