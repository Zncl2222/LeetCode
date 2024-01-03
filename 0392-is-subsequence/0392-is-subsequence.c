bool isSubsequence(char* s, char* t) {
    char* s_char = s;
    char* t_char = t;
    
    while (*s_char != 0) {
        if (*t_char == 0) {
            return false;
        }
        
        if (*s_char == *t_char) {
            s_char++;
        }
        t_char++;
    }
    return true;
}