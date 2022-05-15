class Solution {
public:
    
    void DFS(vector<vector<int>>& res, vector<int>& nums, vector<int>& record){
        
        if(record.size() == nums.size()){
            res.push_back(record);
            return;
        }
        
        for(int i = 0; i < nums.size(); i++){
            
            if(find(record.begin(), record.end(), nums[i]) == record.end()){
                
                record.push_back(nums[i]);
                DFS(res, nums, record);
                record.pop_back();
            }   
        }  
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> record;
        
        DFS(res, nums, record);
        
        return res;
    }
};