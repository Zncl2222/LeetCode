class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        sol=""

        for i in zip(*strs):
            
            if len(set(i))==1:
                
                sol+=i[0]
                
            else:
                break
                
        return sol