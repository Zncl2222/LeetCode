#define MIN(a,b) (a < b ? a : b)

int minCostClimbingStairs(int* cost, int costSize){
    for (int i = 2; i < costSize; i++) {
        cost[i] += MIN(cost[i - 1], cost[i - 2]);
    }
    return MIN(cost[costSize - 1], cost[costSize - 2]);
}