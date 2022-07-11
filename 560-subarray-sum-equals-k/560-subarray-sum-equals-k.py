class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        
        total = 0
        res = 0
        table = {}
        table[0] = 1
        
        for items in nums:
            
            total += items
            
            if table.get(total) == None:
    
                table[total] = 0
            
            if table.get(total-k) != None:
                
                res += table[total-k]

            table[total] += 1
            
        return res