

int mySqrt(int x){
    
    long sol=0;
    
    while(sol*sol<=x){
        sol++;
    }
    return sol-1;

}