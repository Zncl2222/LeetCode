int cmp ( const void *a , const void *b ) { 
    return *(int *)a - *(int *)b; 
}


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    for(int i=m-1,j=0;j<n;j++){
        
        nums1[i+j+1]=nums2[j];
        
    }
    
    qsort(nums1,nums1Size,sizeof(int),cmp); 
    
}