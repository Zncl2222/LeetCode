class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> ballon_map;
        unordered_map<char, int> count_text;
        
        for (char c: text) {
            count_text[c]++;
        }
        
        for (char c: std::string("balloon")) {
            ballon_map[c]++;
        }
        
        int res = text.length();
        for (const auto &[key, value]: ballon_map) {
            res = min(res, count_text[key] / value);
        }
        return res;
    }
};