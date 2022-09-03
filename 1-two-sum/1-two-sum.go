func twoSum(nums []int, target int) []int {
    
    table := make(map[int]int)
    res := []int{}
    
    for idx, val := range nums {
        
        t := target - val
                
        if _, ok := table[t]; ok {
            
            res = append(res, table[t], idx)
        }
        
        table[val] = idx
    }
    
    return res
}