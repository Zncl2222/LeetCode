# define MAX(a,b) (a>b?a:b)
class Solution {
public:
    int rob(vector<int>& nums) {
        
        int case1 = 0, case2 = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            if(i % 2 == 0)
                case1 = MAX(case2, case1 + nums[i]);
            else
                case2 = MAX(case1, case2 + nums[i]);
            
        }
        
        return MAX(case1, case2);
        
    }
};