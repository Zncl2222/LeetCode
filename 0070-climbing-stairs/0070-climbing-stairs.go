func climbStairs(n int) int {
    if n == 1 || n == 2 || n == 3 {
        return n
    }
    
    pre := 1
    curr := 2
    res := 0
    
    for i := 2; i < n; i++ {
        res = curr + pre
        pre = curr
        curr = res
    }
    return res
}