class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        count=0
        
        for x in nums:
            
            if(x!=0):
                
                nums[count]=x
                count+=1
   
        for i in range(count,len(nums)):
            
            nums[i]=0