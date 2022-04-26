# define MAX(a,b) (a<=b?b:a)

int maxSubArray(int* nums, int numsSize){

    int sum=0;
    int best=INT_MIN;
    
    for (int i=0; i<numsSize;i++){
        
        sum=MAX(nums[i]+sum,nums[i]);
        best=MAX(best,sum);
    
    }
    
    return best;
}