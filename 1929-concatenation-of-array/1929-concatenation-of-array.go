func getConcatenation(nums []int) []int {
    n_length := len(nums)
    res := make([]int, 2 * n_length)
    for i := 0; i < 2; i++ {
        for j := 0; j < n_length; j++ {
            res[i * n_length + j] = nums[j]
        }  
    }
    return res
}