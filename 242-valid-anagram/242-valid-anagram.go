func isAnagram(s string, t string) bool {
    
    if len(s) != len(t) {
        return false;
    }
    
    table := make(map[rune]int)
    
    for _, val := range s {
        table[val]++;
    }  
    
    for _, val := range t {
        table[val]--;
    }
    
    for idx, _ := range table {
        if table[idx] != 0 {
            return false;
        }
    }
    
    return true
}