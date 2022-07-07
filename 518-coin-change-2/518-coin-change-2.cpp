class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int coinsSize = coins.size();
        vector<int> table(amount+1);
        
        if(coinsSize == 0){
            
            if(amount == 0)
                return 1;
            
            return 0;   
        }
        
        table[0] = 1;
        for(int i = 0; i < coinsSize; i++){
            
            
            for(int j = coins[i]; j < amount+1; j++){
                
                table[j] += table[j - coins[i]];
            }
            
        }
        
        return table[amount];
    }
};