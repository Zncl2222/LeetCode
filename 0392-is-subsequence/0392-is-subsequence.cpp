class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == "") {
            return true;
        }
        
        int s_idx = 0;
        int t_idx = 0;
        
        while (t_idx < t.size()) {
            if (s[s_idx] == t[t_idx]) {
                if (s_idx == s.size() - 1) {
                    return true;
                }
                s_idx++;
            }
            t_idx++;
        }
        return false;
    }
};