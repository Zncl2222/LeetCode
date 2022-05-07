class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        table={}
        res=[]
        
        for i in range(len(numbers)):
            
            temp = target-numbers[i]
            
            if temp not in table:
                table[numbers[i]]=i
            
            else:
                res.append(table[temp]+1)
                res.append(i+1)
                     
        return res