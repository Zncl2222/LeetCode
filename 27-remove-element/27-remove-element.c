

int removeElement(int* nums, int numsSize, int val){
    
    int current_n=0;
    
    for (int i=0;i<numsSize;i++){
        
        if (nums[i]!=val){
            
            nums[current_n++]=nums[i];
        }
        
    }
    
    return current_n;
}