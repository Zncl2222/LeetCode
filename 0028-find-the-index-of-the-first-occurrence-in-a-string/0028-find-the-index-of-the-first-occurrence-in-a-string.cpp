class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j;
        if (haystack.size() < needle.size()) {
            return -1;
        }
        
        int found = 0;
        for (i = 0; i < haystack.size() - needle.size() + 1; i++) {
            for (j = 0; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needle.size()) {
                return i;
            }
        }
        return -1;
    }
};