class Solution:
    def reverseWords(self, s: str) -> str:

        res=""
        count=0
        
        for x in s.split():
            
            res+=("".join(x[::-1]))
            
            if(len(s.split())-1==count):
                break
            else:
                res+=" "
                count+=1
        
        return res        
        