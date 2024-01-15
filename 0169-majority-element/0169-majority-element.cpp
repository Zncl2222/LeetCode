#define MAX(a, b) (a > b ? a : b)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int res = 0;
        
        for (auto &n: nums) {
            if (count == 0) {
                res = n;
            }
            count += (res == n) ? 1 : -1;
        }
        return res;
    }
};