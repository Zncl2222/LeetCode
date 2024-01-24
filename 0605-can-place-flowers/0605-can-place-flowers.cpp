class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        
        int max_count = 0;
        int bed_size = flowerbed.size();
        
        if (bed_size == 1) {
            if (n == 1 && flowerbed[0] == 0) {
                return true;
            }
            return false;
        }
        
        for (int i = 0; i < bed_size; i++) {
            if (i == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                max_count++;
            } else if (i != 0 && i != bed_size - 1 && flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                max_count++;
            } else if (i == bed_size - 1 && flowerbed[i - 1] == 0 && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                max_count++;
            }
        }
        
        if (max_count < n) {
            return false;
        }
        
        return true;
    }
};