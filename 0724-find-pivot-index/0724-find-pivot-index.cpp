class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int i = 1; i < nums.size(); i++) {
            right_sum += nums[i]; 
        }
        
        if (right_sum == 0) {
            return 0;
        }
        
        for (int i = 1; i < nums.size(); i++) {
            left_sum += nums[i - 1];
            right_sum -= nums[i];
            
            if (left_sum == right_sum) {
                return i;
            }
        }
        return -1;
    }
};