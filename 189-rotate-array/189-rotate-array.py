class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        temp=nums.copy()
        
      
        for i in range(len(nums)):
            
            idx=(i+k)%len(nums)
            
            nums[idx]=temp[i]

        