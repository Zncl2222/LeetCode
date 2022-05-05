class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int numsize=nums.size();
        
        int front=0, end=numsize-1, mid;
        
        while(front<=end){
            
            mid=(front+end)/2;
            
            if(target>nums[mid])
                front=mid+1;
            
            else if(target<nums[mid])
                end=mid-1;
            
            else
                return mid;
            
        }
        
        return -1;
    }
};