class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int res = 0;
        
        for(auto itr = nums.begin(); itr != nums.end(); itr++){
            
            res ^= (*itr);

        }

        return res;        
    }
};