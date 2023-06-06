class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        if not nums:
            return
        pivot = random.choice(nums)
        left = [x for x in nums if pivot < x]
        mid = [x for x in nums if x == pivot]
        right = [x for x in nums if pivot > x]
        
        L = len(left)
        M = len(mid)
        
        if k <= L:
            return self.findKthLargest(left, k)
        elif k > L + M:
            return self.findKthLargest(right, k - L - M)
        return mid[0]