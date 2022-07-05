class Solution {
public:
    int tribonacci(int n) {
        
        if(n == 0)
            return 0;
        else if(n == 1 || n == 2)
            return 1;
        
        vector<int> sum;
        sum.push_back(0);
        sum.push_back(1);
        sum.push_back(1);
        
        for(int i = 3; i <= n; i++){
            
            sum.push_back(sum[i-1]+sum[i-2]+sum[i-3]);
        }
        
        return sum[n];
    }
};