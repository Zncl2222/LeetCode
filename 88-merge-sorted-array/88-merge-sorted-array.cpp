class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i=m-1,j=0;j<n;j++){

            nums1[i+j+1]=nums2[j];

        }
              
        sort(nums1.begin(),nums1.end()); 
        
    }
};