class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> letters;
        
        int best = 0;
        int left = 0;
        int right = 0;
        
        while(right < s.size()){
            
            if(letters.find(s[right]) == letters.end()){
                letters[s[right]]++;
                best = max(best, (right - left + 1));
                right++;
            }
            else{
                letters.erase(s[left]);
                left++;
            }
            
        }
        return best;
  
    }
};