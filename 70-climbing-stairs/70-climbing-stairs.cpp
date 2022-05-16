class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 1 || n == 2 || n == 3)
            return n;
        
        int pre = 1, curr = 2, total;
        
        for(int i = 2; i < n; i++){
            
            total = pre + curr;
            pre = curr;
            curr = total;     
        }
        
        return total;
        
    }
};