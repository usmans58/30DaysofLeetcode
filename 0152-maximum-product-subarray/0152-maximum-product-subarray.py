class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        imax,imin=1,1
        global_max_product=nums[0]
        
        for n in nums:
            candidates=(n,n*imax, n*imin)
            
            imax,imin=max(candidates),min(candidates)
            
            global_max_product=max(imax,global_max_product)
        
        return global_max_product
            