class Solution {
private:
    bool isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
            return true;
        return false;
    }
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int right = 0;
        int count = 0;
        int maxi = INT_MIN;
        while(right < s.size()) {
            if(right - left == k) {
                maxi = max(count, maxi);
                if(maxi == k) {
                    return count;
                }
                if(isVowel(s[left++])) {
                    count--;
                }
                if(isVowel(s[right++])) {
                    count++;
                }
            } else {
                if(isVowel(s[right])) {
                    count++;
                }
                right++;
            }
        }
        maxi = max(count, maxi);
        return maxi;
    }
};