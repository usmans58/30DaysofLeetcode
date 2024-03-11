class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        count_dictionary={}
        result=0
        nums.sort()
        for num in nums:
            if num in count_dictionary:
                count_dictionary[num]+=1
            else:
                count_dictionary[num]=1
        
        for key,value in count_dictionary.items():
            if value==1:
                return key
        