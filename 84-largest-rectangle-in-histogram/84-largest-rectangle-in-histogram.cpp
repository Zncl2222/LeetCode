class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        stack<pair<int, int>> stk;
        int res = 0;
        
        for(int i = 0; i < heights.size(); i++){
            
            int start = i;
            
            while(!stk.empty() && stk.top().second > heights[i]){
                
                int index = stk.top().first;
                int width = i - index;
                int height = stk.top().second;
                
                res = max(res, width * height);
                start = index;
                stk.pop();
            }
            
            stk.push({start, heights[i]});
        }
        
        while(!stk.empty()){
            
            int width = heights.size() - stk.top().first;
            int height = stk.top().second;
            
            res = max(res, width * height);
            stk.pop();
        }
        
        return res;
    }
};