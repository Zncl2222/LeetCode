int Bsearch(int* nums, int numsSize, int front, int end){
    
    if(front == end)
        return front;
    
    int mid = (front + end) / 2;
    
    if(nums[mid] > nums[mid+1])
        return Bsearch(nums, numsSize, front, mid);
    
    return Bsearch(nums, numsSize, mid+1, end);
    
}


int findPeakElement(int* nums, int numsSize){
    
    int front = 0, end = numsSize - 1;
    
    return Bsearch(nums, numsSize, front, end);

}