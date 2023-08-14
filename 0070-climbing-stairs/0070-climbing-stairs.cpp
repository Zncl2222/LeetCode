class Solution {
public:
    int climbStairs(int n) {

        if (n == 1 || n == 2 || n == 3) {
            return n;
        }
        
        int pre = 1;
        int curr = 2;
        int res = 0;
        
        for (int i = 2; i < n; i++) {
            res = curr + pre;
            pre = curr;
            curr = res;
        }
        return res;
    }
};