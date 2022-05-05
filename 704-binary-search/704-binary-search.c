

int search(int* nums, int numsSize, int target){

    int front=0, end=numsSize-1, mid;
    
    while(front<=end){
        
        mid=(front+end)/2;
        
        if(target>nums[mid])
            front=mid+1;
        else if (target<nums[mid])
            end=mid-1;
        else
            return mid;
    }
    
    return -1;
}