func productExceptSelf(nums []int) []int {
    
    var prefix int = 1
    var postfix int = 1
    n := len(nums)
    
    res := make([]int, n)
    
    for i := 0; i < n; i++ {
        res[i] = 1
    } 
    
    for idx, _ := range nums {
        res[idx] = prefix
        prefix *= nums[idx]
    }
    
    for i := n - 1; i >= 0; i-- {
        res[i] *= postfix
        postfix *= nums[i]
    }
    
    return res
    
}