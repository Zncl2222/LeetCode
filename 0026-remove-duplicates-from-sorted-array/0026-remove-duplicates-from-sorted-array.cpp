class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> unique_map;
        int curr_idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (unique_map.find(nums[i]) == unique_map.end()) {
                unique_map[nums[i]] = 1;
                nums[curr_idx] = nums[i];
                curr_idx++;
            }
        }
        
        int k = unique_map.size();
        return k;
    }
};