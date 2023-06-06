class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        if not nums:
            return
        pivot = random.choice(nums)
        left = [x for x in nums if pivot > x]
        mid = [x for x in nums if x == pivot]
        right = [x for x in nums if pivot < x]
        right_len = len(right)
        mid_len = len(mid)
        
        if k <= right_len:
            return self.findKthLargest(right, k)
        elif k > right_len + mid_len:
            return self.findKthLargest(left, k - right_len - mid_len)
        return mid[0]