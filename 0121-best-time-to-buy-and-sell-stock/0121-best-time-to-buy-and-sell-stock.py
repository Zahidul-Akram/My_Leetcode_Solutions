class Solution(object):
    def maxProfit(self, prices):
        b = prices[0]
        max = 0

        for i in range(1,len(prices)):
            if(b > prices[i]):
              b = prices[i]

            elif ((prices[i] - b) > max):
                max = (prices[i] - b)

        return max