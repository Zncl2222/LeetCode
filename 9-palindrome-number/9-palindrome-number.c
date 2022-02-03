

bool isPalindrome(int x){
    
    long int sol = 0;
    int origin_x = x;
    
    while(x > 0){
        
        sol = sol * 10 + x % 10;
        x = x / 10;
    }
    
    return (sol == origin_x);
}