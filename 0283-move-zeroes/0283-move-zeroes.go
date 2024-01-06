func moveZeroes(nums []int)  {
    curr_idx := 0
    for i := 0; i < len(nums); i++ {
        if nums[i] != 0 {
            nums[curr_idx] = nums[i]
            curr_idx++
        }
    }
    
    for i := curr_idx; i < len(nums); i++ {
        nums[i] = 0
    }
}
