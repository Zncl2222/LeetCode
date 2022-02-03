int reverse(int x){
    
    long sol = 0;

    while (x)
    {
        sol = sol * 10 + x % 10;
        x /= 10;
    }
    
    if (sol < INT_MIN || sol > INT_MAX){
        return 0;
    }
       
    return sol;
}