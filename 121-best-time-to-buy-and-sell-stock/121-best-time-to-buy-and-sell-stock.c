# define MAX(a,b) (a>b?a:b)

int maxProfit(int* prices, int pricesSize){
    
    int best=0;
    int temp=0;
    
    for(int i=1;i<pricesSize;i++){
        
        temp+=prices[i]-prices[i-1];
        
        if(temp<0)
            temp=0;

        best=MAX(best,temp);
    }
    
    return best;
}