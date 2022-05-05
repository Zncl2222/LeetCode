class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s)!=len(t):
            return False
        
        table={}
        
        for i in range(len(s)):
            
            if s[i] not in table :
                table[s[i]]=1       
            else:
                table[s[i]]+=1
                
        for i in range(len(t)):
                        
            if t[i] not in table:
                table[t[i]]=-1       
            else:
                table[t[i]]-=1
                
        for key in table:
            
            if table[key]<0:
                return False
            
        return True
                
            