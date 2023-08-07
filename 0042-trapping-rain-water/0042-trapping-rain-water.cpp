class Solution {
public:
    int trap(vector<int>& height) {
        int head = 0;
        int tail = height.size() - 1;
        int max_left = height[head];
        int max_right = height[tail];
        int area = 0;
        
        while(head < tail){
            if(max_left <= max_right){
                ++head;
                max_left = max(max_left, height[head]);
                area += max_left - height[head];
            }
            else if(max_left > max_right){
                --tail;
                max_right = max(max_right, height[tail]);
                area += max_right - height[tail];
            }
        }
        return area;
    }
};