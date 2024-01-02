int lengthOfLastWord(char* s) {
    int length = 0;
    
    if (s[0] != ' ') {
        length = 1;
    }
    
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] != ' ') {
            if (s[i - 1] == ' ') {
                length = 1;
            } else {
                length++;
            }
        }
    }
    return length;
}