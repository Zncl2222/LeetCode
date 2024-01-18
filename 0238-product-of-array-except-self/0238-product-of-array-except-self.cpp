class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre_fix = 1;
        int non_zero_count = 0;
        vector<int> res(nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                pre_fix *= nums[i];
                non_zero_count++;
            }
        }
        int zero_count = nums.size() - non_zero_count; 
        for (int i = 0; i < nums.size(); i++) {
            if (zero_count != 0) {
                if (nums[i] != 0) {
                    res[i] = 0;
                } else if (nums[i] == 0 && zero_count == 1) {
                    res[i] = pre_fix;
                } else if (nums[i] == 0 && zero_count > 1) {
                    res[i] = 0;
                }
            } else {
                res[i] = pre_fix / nums[i];
            }
        }
        return res;
    }
};