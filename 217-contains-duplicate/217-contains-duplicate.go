func containsDuplicate(nums []int) bool {
    var table = make(map[int]int)
    
    for i := 0; i < len(nums); i++ {
        val, _ := table[nums[i]]
        if val == 1 {
            return true
        }
        table[nums[i]] = 1
    }
    return false
}