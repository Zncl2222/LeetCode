class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int best = 0;
        int temp = 0;
        
        for(int i = 1; i < prices.size(); i++){
            
            temp += prices[i] - prices[i-1];
            
            if(temp < 0)
                temp = 0;
            
            best = max(best, temp);
        }
        return best;
    }
};