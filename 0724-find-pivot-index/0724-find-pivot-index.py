class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            left = sum(nums[:(i + 1)])
            right = sum(nums[i:])
            if left == right:
                return i
        return -1