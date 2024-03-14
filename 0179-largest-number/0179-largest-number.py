def large_num_key(x, y):
    return -1 if x + y > y + x else 1


class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        nums = [str(x) for x in nums]
        largest_nums = ''.join(sorted(nums, key=cmp_to_key(large_num_key)))
        return '0' if largest_nums[0] == '0' else largest_nums