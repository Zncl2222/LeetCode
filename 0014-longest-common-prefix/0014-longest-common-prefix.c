char* longestCommonPrefix(char** strs, int strsSize) {
    int common_prefix = 0;
    int first_str_size = strlen(strs[0]);
    
    for (int i = 0; i < first_str_size; i++) {
        for (int j = 1; j < strsSize; j++) {
            if (i == strlen(strs[j]) || strs[0][i] != strs[j][i]) {
                strs[0][common_prefix] = '\0';
                return strs[0];
            }
        }
        common_prefix++;
    }
    return strs[0];
}