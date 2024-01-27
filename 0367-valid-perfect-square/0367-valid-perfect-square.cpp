class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }
        
        int left = 0;
        int right = num;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            double x = (double)num / (double)mid;
            if (x == mid) {
                return true;
            } else if (x < mid) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};