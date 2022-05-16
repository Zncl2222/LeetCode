class Solution:
    def rob(self, nums: List[int]) -> int:
        
        case1, case2 = 0, 0
        
        for i in range(len(nums)):
            
            if(i % 2 == 0):
                case1 = max(case2, nums[i] + case1)  
            else:
                case2 = max(case1, nums[i] + case2)
                
        return max(case1, case2)
        