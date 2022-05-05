class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        front, end = 0, len(nums)-1
        
        while(front<=end):
            
            mid=(front+end)//2
            
            if target<nums[mid]:
                
                end=mid-1
                
            elif target>nums[mid]:
                
                front=mid+1
                
            else:
                return mid
            
        return -1