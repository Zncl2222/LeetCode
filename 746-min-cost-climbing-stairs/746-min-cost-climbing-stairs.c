# define MIN(a,b) (a<b?a:b)

int minCostClimbingStairs(int* cost, int costSize){

    int* sum = (int*)malloc(costSize*sizeof(int));
    
    sum[0] = cost[0];
    sum[1] = cost[1];
    
    for(int i = 2; i < costSize; i++){
        
        sum[i] = MIN(sum[i-1], sum[i-2]) + cost[i];
        
    }
    
    return MIN(sum[costSize-1], sum[costSize-2]);

}