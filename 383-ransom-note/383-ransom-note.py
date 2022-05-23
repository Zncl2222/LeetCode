class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        
        a = Counter(ransomNote)
        b = Counter(magazine)
        
        for i, _ in a.items():

            if(a[i]<=b[i]):
                continue
            else:
                return False
        return True