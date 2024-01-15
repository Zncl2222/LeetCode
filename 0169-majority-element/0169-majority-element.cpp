#define MAX(a, b) (a > b ? a : b)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> nums_map;
        int max_count = 0;
        int res = 0;
        
        for (const int &n: nums) {
            if (nums_map.find(n) == nums_map.end()) {
                nums_map[n] = 1;
                if (nums_map.size() == 1) {
                    res = n;
                }
            } else {
                nums_map[n]++;
                res = nums_map[n] > max_count ? n : res;
                max_count = MAX(max_count, nums_map[n]);
            }
           
        }
        return res; 
    }
};