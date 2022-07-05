# define MAX(a,b) (a>b?a:b)

int lengthOfLIS(int* nums, int numsSize){
    
    int* dp = (int*)malloc(numsSize*sizeof(int));
    
    for(int i = 0; i < numsSize; i++){
        
        dp[i] = 1;
    }
    
    for(int i = 1; i < numsSize; i++){
        
        for(int j = 0; j < i; j++){
            
            if(nums[i] > nums[j])
                dp[i] = MAX(dp[i], dp[j]+1);
            
        }
    }
    
    for(int i = 0; i < numsSize; i++){
        dp[numsSize-1] = MAX(dp[numsSize-1], dp[i]);

    }
    
    return dp[numsSize-1];
}