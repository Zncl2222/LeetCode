#define MIN(a, b) a > b ? b : a

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int shortest_len = INT_MAX;
        int count = 0;
        
        if (strs.size() == 1) {
            return strs[0];
        }
        
        for (int i = 0; i < strs.size(); i++) {
            shortest_len = MIN(shortest_len, strs[i].size());
        }

        for (int i = 0; i < shortest_len; i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] == strs[j - 1][i]) {
                    count++;
                } else {
                    count = 0;
                }
                if (count == strs.size() - 1) {
                    res += strs[j][i];
                    count = 0;
                }
            }
            if (res.size() - 1 != i) {
                return res;
            }
        }
        return res;
    }
};