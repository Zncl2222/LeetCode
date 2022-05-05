// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long front = 0, end = n;
        
        while(front<=end){
            
            long mid=(front+end)/2;
            
            if(isBadVersion(mid)==true)
                end=mid-1;
            else
                front=mid+1;
            
        }
        
        return (int)front;
    }
};