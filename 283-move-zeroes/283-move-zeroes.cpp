class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int count = 0;
        for(auto i = nums.begin(); i != nums.end(); i++){
            
            if(*i != 0){
                nums[count] = *i;
                count++;
            }
        }
        
        for (int i = count; i< nums.size(); i++){
            
            nums[i] = 0;
        }
    }
};