bool isPerfectSquare(int num) {
    if (num == 1) {
        return true;
    }
    
    int left = 0;
    int right = num;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        double x = (double)num / (double)mid;
        if (x > mid) {
            left = mid + 1;
        } else if (x < mid) {
            right = mid;
        } else {
            return true;
        }
    }
    return false;
}