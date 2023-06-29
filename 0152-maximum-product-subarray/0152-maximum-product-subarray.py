class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res = nums[0]
        curr_max = 1
        curr_min = 1
        
        for n in nums:
            temp = curr_max * n
            curr_max = max(curr_max * n , curr_min * n, n)
            curr_min = min(curr_min * n, temp, n)
            res = max(res, curr_max)
            
        return res