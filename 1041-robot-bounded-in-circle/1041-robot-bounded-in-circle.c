
struct robot{
    
    int x;
    int y;
    int direction;
    
};


bool isRobotBounded(char * instructions){
    
    struct robot current;

    current.x=0;
    current.y=0;
    current.direction=90;
    
    size_t len = strlen(instructions);
      
    for (int i=0;i<len;i++){
        
        switch(instructions[i]){
                
            case 'G':
                if (current.direction==90){
                    current.y+=1;
                }
                else if (current.direction==270){
                    current.y-=1;
                }
                else if (current.direction==0){
                    current.x+=1;
                }
                else if (current.direction==180){
                    current.x-=1;
                };
                break;
                
            case 'L':
                current.direction+=90;
                break;
                
            case 'R':
                current.direction-=90;
                break;
        }
        
        current.direction=(current.direction/90)%4*90;
        
        if (current.direction<0){
            current.direction=abs(current.direction)+180;
        }
        
    }
    return current.direction != 90 || (current.x==0 && current.y==0);
};