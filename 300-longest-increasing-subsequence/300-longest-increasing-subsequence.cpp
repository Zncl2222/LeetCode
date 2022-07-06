class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int numsSize = nums.size();
        
        vector<int> table(numsSize, 1);
        
        for(int i = 1; i < numsSize; i++){
            
            for(int j = 0; j < i; j++){
                
                if(nums[i] > nums[j])
                    table[i] = max(table[i], table[j]+1);
            }
        }
        
        for(int i = 0; i < numsSize; i++){
            
            table[numsSize-1] = max(table[numsSize-1], table[i]);
            
        }
        
        return table[numsSize-1];
    }
};