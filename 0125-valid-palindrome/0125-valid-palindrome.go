func isPalindrome(s string) bool {
    f := func(r rune) rune {
        if !unicode.IsLetter(r) && !unicode.IsNumber(r) {
            return -1
        }
        
        return unicode.ToLower(r)
    }
    s = strings.Map(f, s)
    head := 0
    tail := len(s) - 1
    for head < tail {
        if s[head] != s[tail] {
            return false
        }
        head += 1
        tail -= 1
    }
    return true
}