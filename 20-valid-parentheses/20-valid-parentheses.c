

bool isValid(char * s){
        
    if(strlen(s)<=1)
        return false;
    
    char* stack=(char*)malloc(strlen(s)*sizeof(char));
    int stack_top=0;
    
    for(int i=0; i<strlen(s); i++){
        
        if(s[i]=='(' || s[i]=='{' || s[i]== '['){
            
            stack[stack_top++]=s[i];
            
            if(stack_top>strlen(s)/2)
                return false;
            
        }        
        
        else{
            
            if(stack_top==0)
                return false;
            
            switch(s[i]){
                    
                case ')':
                    
                    if(stack[--stack_top]!='(')
                        return false;
                    break;
                case '}':
                    
                    if(stack[--stack_top]!='{')
                        return false;
                     break;
                case ']':
                    
                    if(stack[--stack_top]!='[')
                        return false;
                     break;
                    
            }
            
            
        }
        
    }
    
    if(stack_top>=1)
        return false;
    
    return true;
        
}