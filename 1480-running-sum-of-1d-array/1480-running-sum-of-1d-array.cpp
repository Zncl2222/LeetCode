class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int nums_size = nums.size();
        
        vector<int> res(nums_size);
        int sum = 0;
        
        for(int i = 0; i < nums_size; i++){
            
            sum += nums[i];
            res[i] = sum;
        }
        
        return res;
    }
};