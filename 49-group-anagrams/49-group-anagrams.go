func groupAnagrams(strs []string) [][]string {
    
    m := make(map[[26]int][]string)
    
    for _, item := range strs {
        var table [26]int
        for _, char := range item {
            
            table[char - 'a']++
        }
        m[table] = append(m[table], item)
    }
    
   var res [][]string
    
    for _, val := range m {
        res = append(res, val)   
    }
    
    return res
}