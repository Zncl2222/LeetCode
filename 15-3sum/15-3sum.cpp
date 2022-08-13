class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        int n_size = nums.size();
        
        if(n_size < 3)
            return res;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n_size - 2; i++){
            
            if(nums[i] > 0)
                break;
            if(i > 0 && nums[i-1] == nums[i])
                continue;
            
            int j = i + 1;
            int k = n_size - 1;
            
            while(j < k){
                
                int sums = nums[i] + nums[j] + nums[k];
                
                if(sums > 0){
                    k--;
                }
                else if(sums < 0){
                    j++;
                }
                else{
                    
                    res.push_back({nums[i], nums[j], nums[k]});
                    
                    while(j < k && nums[j] == nums[j+1]){
                        j++;
                    }
                    j++;
                    while(j < k && nums[k] == nums[k-1]){
                        k--;
                    }
                    k--;
                }
            }
        }
        
        return res;
    }
};