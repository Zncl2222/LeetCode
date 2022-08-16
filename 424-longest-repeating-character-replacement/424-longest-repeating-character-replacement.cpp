class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int left = 0;
        int right = 0;
        
        int n = s.size();
        int best = 0;
        int res = 0;
        vector<int> count(26);
        
        while(right < n){
            
            count[s[right]-'A']++;
            best = max(best, count[s[right]-'A']);
            
            if(right - left + 1 - best > k){
                count[s[left]-'A']--;
                left++;
            }
            res = max(res, right - left + 1);
            right++;
        }
        return res;
        
    }
};