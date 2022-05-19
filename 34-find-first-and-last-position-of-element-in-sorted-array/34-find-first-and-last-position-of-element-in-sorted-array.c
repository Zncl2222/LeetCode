

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    
    int front = 0, end = numsSize-1, mid, flag = 0;
    
    int* res = (int*)malloc(2*sizeof(int));
    res[0] = -1;
    res[1] = -1;
    
    *returnSize = 2;
    
    if(numsSize == 0)
        return res;

    while(front <= end){
        
        mid = (front + end) / 2;
        
        if(nums[mid] == target){
            
            int mid2 = mid;
            while (front < mid){
                int l_mid = (mid + front) / 2;
                if (nums[l_mid] < target)
                    front = l_mid + 1;
                else
                    mid = l_mid;
            }
            while (mid2 < end){
                int r_mid = (mid2 + end + 1) / 2;
                if (nums[r_mid] > target)
                    end = r_mid - 1;
                else
                    mid2 = r_mid;
            }
            res[0] = front; 
            res[1] = end;
            return res;
        }
        if(target < nums[mid])
            end = mid -1;
        else
            front = mid +1;   
    }
    
    
    
    
    
    return res;
        
}
