class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        if len(s) == 0:
            return 0
        
        best=1 
        boundary=0
        
        for i in range(1,len(s)):
            
            if s[i] in s[boundary:i]:
                
                boundary=s[boundary:i].index(s[i])+boundary+1
                
            best=max(best,i-boundary+1)
            
        return best