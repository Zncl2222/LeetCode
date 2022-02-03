
int Valuejudge(char number){
    
    switch(number){      
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;           
    }
    return 0;
}


int romanToInt(char * s){
    
    int sol=0;
    
    for (int i=0;s[i]!='\0';i++){
        
        if (Valuejudge(s[i])<Valuejudge(s[i+1])){
            
            sol=sol-Valuejudge(s[i]);
        }
        
        else{
            
            sol=sol+Valuejudge(s[i]);
        }
        
    }
    
    return sol;   
}