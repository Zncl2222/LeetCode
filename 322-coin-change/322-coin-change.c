# define MIN(a, b) (a < b ? a : b)

int coinChange(int* coins, int coinsSize, int amount){
    
    if(coinsSize == 0)
        return 0;
    if(amount == 0)
        return 0;
    
    int* dp = (int*)malloc((amount+1)*sizeof(int));
    
    for(int i = 1; i < amount + 1; i++){
        dp[i] = amount + 1;
    }
    
    dp[0] = 0;
    
    for(int i = 1; i < amount + 1; i++){
        
        for(int j = 0; j < coinsSize; j++){
                    
            if(i >= coins[j] && dp[i-coins[j]] != amount + 1)
                dp[i] = MIN(dp[i], dp[i-coins[j]] + 1);
        }
        
    }

    return (dp[amount] == amount + 1 ? -1 : dp[amount]);
}