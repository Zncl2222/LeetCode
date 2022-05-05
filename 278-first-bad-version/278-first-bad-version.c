// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    
    long front=1, end=n, mid;
    
    while(front<=end){
        
        mid=(front+end)/2;
        
        bool check1=isBadVersion(mid);
        
        if(check1 == true)
            end=mid-1;
        else
            front=mid+1;

    }
    
    return (int)front;
}