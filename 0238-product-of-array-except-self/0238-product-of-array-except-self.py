class Solution(object):
    def productExceptSelf(self, nums):
        mul = 1
        z_count = 0
        prod = []
        for i in range(0 , len(nums)):
            if(nums[i]==0):
                z_count+=1
            else : 
                mul = mul * nums[i]
        for i in range(0 , len(nums)):
            if(z_count>1 or (z_count==1 & (nums[i]>0 or nums[i]<0))):
                prod.append(0)
            elif(nums[i]==0):
                prod.append(mul)
            else :
                prod.append((int)(mul/nums[i]))

        return prod