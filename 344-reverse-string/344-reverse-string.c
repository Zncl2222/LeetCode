void swap(char* s,int idx1, int idx2){
    
    char* temp=s[idx1];
    
    s[idx1]=s[idx2];
    s[idx2]=temp;

}

void reverseString(char* s, int sSize){

        
    int low=0, high=sSize-1;
    
    while(low<sSize/2){
        
        swap(s,low,high);
        
        low++;
        high--;
    }
    
    
}