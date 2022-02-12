class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        index=0
        
        for item in nums:
            
            if item >= target:
                
                return index
            
            index+=1
            
        return len(nums)
                