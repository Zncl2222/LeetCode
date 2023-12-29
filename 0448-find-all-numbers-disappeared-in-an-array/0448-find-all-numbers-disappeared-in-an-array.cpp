class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> number_map;
        vector<int> res;
        for (auto &n: nums) {
            number_map[n]++;
        }
        
        for (int i = 1; i < nums.size() + 1; i++) {
            if (number_map.find(i) == number_map.end()) {
                res.push_back(i);
            }
        }
        return res;
    }
};