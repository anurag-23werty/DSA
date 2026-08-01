class Solution(object):
    def findMin(self, nums):
        """

        :type nums: List[int]
        :rtype: int
        """
        for i in range(len(nums)):
            if(nums[i]<=nums[-1]): return nums[i]
        