class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int head = 0;
        int tail = height.size() - 1;
        int area = 0;
        
        while(head < tail){
            
            int roof = min(height[head], height[tail]);
            area = max(roof*(tail-head), area);
            
            if(height[head] > height[tail]){
                tail--;
            }
            else{
                head++;
            }
        }
        
        return area;
    }
};