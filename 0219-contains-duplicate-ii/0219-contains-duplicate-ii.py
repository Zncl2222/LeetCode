class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        cache = {}
        for i, n in enumerate(nums):
            if n in cache and i - cache[n] <= k:
                return True
            else:
                cache[n] = i
        return False