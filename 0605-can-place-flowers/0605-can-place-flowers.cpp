class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        
        int max_count = 0;
        int bed_size = flowerbed.size();
        for (int i = 1; i < bed_size - 1; i++) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
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