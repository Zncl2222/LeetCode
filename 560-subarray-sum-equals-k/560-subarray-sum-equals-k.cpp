class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> table;
        
        int sum = 0, res = 0;
        table[0] = 1;
 
        for(int i = 0; i < nums.size(); i++){
            
            sum = sum + nums[i];
            
            if(table.find(sum - k) != table.end())
                res += table[sum-k];
            
            table[sum]++;
            
        }
        
        return res;
        
    }
};