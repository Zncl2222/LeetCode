class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int coinsSize = coins.size();
        int count = 0;
        int best_count = 0;
        vector<int> table(amount+1, INT_MAX);
        
        if(coinsSize == 0){
            
            if(amount == 0)
                return -1;
            
            return 0;
        }
        
        table[0] = 0;
        for(int i = 1; i < amount + 1; i++){
            
            for(auto coin : coins){
                
                if(coin <= i && table[i-coin] != INT_MAX)
                    table[i] = min(table[i], table[i-coin]+1);
                
            }
        }
        
        return (table[amount] == INT_MAX) ? -1 : table[amount];
    }
};