func max(a int, b int) int {
    if a > b {
        return a
    }
    return b
}

func maxSubArray(nums []int) int {
    best := nums[0]
    sum := 0
    
    for _, val := range nums {
        sum = max(val, sum + val)
        best = max(best, sum)
    }
    return best
}