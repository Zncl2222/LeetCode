class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> table;
        vector<int> res(2);
        int t, count = 0;
        
        for(auto itr = nums.begin(); itr != nums.end(); itr++){
            
            t = target - *itr;
            
            if(table.find(*itr) == table.end())
                table[t] = count;
            else{
                res[0] = table[*itr];
                res[1] = count;
                return res;
            }
            
            count++;
        }
        
        return res;  
    }
};