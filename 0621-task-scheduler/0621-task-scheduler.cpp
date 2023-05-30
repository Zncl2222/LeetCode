class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> map;
        int count = 0;
        for (auto t:tasks) {
            map[t]++;
            count = max(count, map[t]);
        }
        
        int res = (count - 1) * (n + 1);
        for (auto m:map) {
            if (m.second == count)
                res++;
        }
        return max((int)tasks.size(), res);
    }
};