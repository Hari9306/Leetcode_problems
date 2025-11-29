class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        sum_arr=0
        for num in nums :
            sum_arr+=num
        return sum_arr%k