class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        long long total = 0;
        int res = 0;
        
        std::sort(nums.begin(), nums.end());
        while (right < nums.size()) {
            total += nums[right];
            while ((long long)nums[right] * (right - left + 1) > total + k) {
                total -= nums[left++];
            }
            res = max(res, (right - left + 1));
            right++;
        }
        return res;
    }
};