class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int left = 0;
        int right = 0;
        
        deque<int> deq;
        vector<int> res;
        
        while(right < nums.size()){
            
            while(!deq.empty() && nums[deq.back()] < nums[right]){
                deq.pop_back();
            }
            deq.push_back(right);
            
            if(left > deq.front())
                deq.pop_front();
            
            if(right - left == k - 1){
                res.push_back(nums[deq.front()]);
                left++;
            }
            right++;
        
        }
        return res;
    }
};