class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s_list = s.split(' ')
        
        if len(s_list) != len(pattern):
            return False
        
        pattern_map = {}
        s_map = {}
        for p, s in zip(pattern, s_list):
            if p in pattern_map and pattern_map[p] != s:
                return False
            if s in s_map and s_map[s] != p:
                return False
            pattern_map[p] = s
            s_map[s] = p
        
        return True