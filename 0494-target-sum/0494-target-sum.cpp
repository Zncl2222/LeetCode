class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return backTrack(nums, target, 0, 0);
    }
private:
    map<pair<int, int>, int> dp;
    int backTrack(vector<int>& nums, int target, int idx, int total) {
        if (nums.size() == idx) {
            return total == target ? 1 : 0;
        }
        
        if (dp.find({idx, total}) != dp.end()) {
            return dp[{idx, total}];
        }
        
        dp[{idx, total}] = backTrack(nums, target, idx + 1, total + nums[idx])
                           + backTrack(nums, target, idx + 1, total - nums[idx]);
            
        return dp[{idx, total}];
    }
};