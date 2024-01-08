class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int duplicate = 2;
        int curr_idx = 1;
        int count = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                if (count < duplicate) {
                    if (count < duplicate) {
                        nums[curr_idx++] = nums[i];
                    }
                    count++;
                }
            } else {
                count = 1;
                nums[curr_idx++] = nums[i];
            }
        }
        return curr_idx;
    }
};