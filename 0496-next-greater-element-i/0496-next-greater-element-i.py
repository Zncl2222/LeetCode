class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums_dict = {val: idx for idx, val in enumerate(nums1)}
        res = [-1] * len(nums1)

        nums_stack = []
        for i in range(len(nums2)):
            while len(nums_stack) != 0 and nums_stack[-1] < nums2[i]:
                val = nums_stack.pop()
                idx = nums_dict[val]
                res[idx] = nums2[i]
            if nums_dict.get(nums2[i]) is not None:
                nums_stack.append(nums2[i])
        return res
                
                
                
            