class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        best,profit,buy,sell=0,0,0,1
        
        while sell<len(prices):
            
            profit+=prices[sell]-prices[buy]
            
            if profit<0:
                profit=0
            best=max(profit,best)
            
            sell+=1
            buy+=1
            
        return best
                
            
            
            