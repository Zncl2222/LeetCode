class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int target = 0;
        for (int i = 0; i < nums.size(); i++) {
            target += nums[i];
        }
        
        if (target % 2 != 0) {
            return false;
        }
        target /= 2;
        
        unordered_set<int> dp;
        dp.insert(0);
        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> curr_dp;
            for (auto d = dp.begin(); d != dp.end(); d++) {
                if (*d + nums[i] == target) {
                    return true;
                }
                curr_dp.insert(*d + nums[i]);
                curr_dp.insert(*d);
            }
            dp = curr_dp;
        }
        return false;
    }
};