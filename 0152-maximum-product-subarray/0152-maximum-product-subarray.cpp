class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int curr_min = 1;
        int curr_max = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int temp = curr_max * n;
            curr_max = max(max(n * curr_max, n * curr_min), n);
            curr_min = min(min(temp, n * curr_min), n);
            res = max(res, curr_max);
        }
        return res;
    }
};