

bool isHappy(int n){
    
    int table[800] = {0};
    
    if(n < 1)
        return false;
    
    while(n != 1){
        
        int temp = n;
        n = 0;
        
        while(temp != 0){
            
            n += pow((temp % 10),2);
            temp /= 10;
        }
        
        table[n]++;
        
        if(table[n]==2)
            return false;
    }
    
    return true;
}