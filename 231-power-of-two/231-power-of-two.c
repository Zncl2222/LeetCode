

bool isPowerOfTwo(int n){

    if(n == 1)
        return true;
    if(n % 2 != 0)
        return false;
    
    long x = 2;
    
    while(x < n){
        
        x *= 2;
    }    
    
    
    return x == n ? true : false; 
}