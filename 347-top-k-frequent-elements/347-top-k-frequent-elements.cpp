class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> table;
        int n_size = nums.size();
        
        for(int i = 0; i < n_size; i++){
            
            table[nums[i]]++;
        }
        
        vector<vector<int>> array(n_size + 1);
        
        for(auto itr = table.begin(); itr != table.end(); itr++){
            
            array[itr->second].push_back(itr->first);
        }
        
        vector<int> res;
        
        for(int i = n_size; i >= 0; i--){
            
            if(k <= res.size())
                break;
            
            if(!array[i].empty()){
                res.insert(res.end(), array[i].begin(), array[i].end());
            }
            
        }
        return res;
    }
};