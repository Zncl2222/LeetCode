# define MAX(a,b) (a>b?a:b)

int rob(int* nums, int numsSize){
    
    int rob_case1 = 0, rob_case2 = 0;
    
    
    for(int i = 0; i < numsSize; i++){
        
        if(i % 2 == 0)
            rob_case1 = MAX(rob_case2, rob_case1 + nums[i]);
        else
            rob_case2 = MAX(rob_case1, rob_case2 + nums[i]);
        
    }
    
    return MAX(rob_case1, rob_case2);
}