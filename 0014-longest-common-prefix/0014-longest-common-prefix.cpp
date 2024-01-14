#define MIN(a, b) a > b ? b : a

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        int shortest_len = INT_MAX;
        
        for (int i = 0; i < strs.size(); i++) {
            shortest_len = MIN(shortest_len, strs[i].size());
        }

        int index = 0;
        while (index < shortest_len) {
            char prev_char = strs[0][index];
            for (int j = 1; j < strs.size(); j++) {
                if (prev_char != strs[j][index]) {
                    return res.substr(0, index);
                }
            }
            index++;
        }
        return res.substr(0, index);
    }
};