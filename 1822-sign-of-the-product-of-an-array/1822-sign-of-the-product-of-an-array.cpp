class Solution {
public:
    int arraySign(vector<int>& nums) {
        int is_neg = 1;
        for (const int& n: nums) {
            if (n == 0) {
                return 0;
            } else if (n < 0) {
                is_neg *= -1;
            } else {
                is_neg *= 1;
            }
        }
        return is_neg;
    }
};