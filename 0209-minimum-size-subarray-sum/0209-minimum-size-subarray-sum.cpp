class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int total = 0;
        int right = 0;
        int left = 0;
        int res = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++) {
            int right = i;
            total += nums[right]; 
            while (total >= target) {
                res = min(res, right - left + 1);
                total -= nums[left++];
            }
         }
        return res != INT_MAX ? res : 0;
    }
};