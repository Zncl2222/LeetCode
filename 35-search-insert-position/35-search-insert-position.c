

int searchInsert(int* nums, int numsSize, int target){
    
    int front=0, end=numsSize-1, mid;
    
    while(front<=end){
        
        mid=(front+end)/2;
        
        if(nums[mid]==target)
            return mid;
            
        else if(nums[mid]>target)
            end=mid-1;
        
        else if(nums[mid]<target)
            front=mid+1;

    }
    
    return front;
    
}