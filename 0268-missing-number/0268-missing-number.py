class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sorted_nums=sorted(nums)
        length=len(nums)
        for i in range(length):
            if i!=sorted_nums[i]:
                return i
        return length