void swap(int* a, int* b){

    int temp=*a;
    *a=*b;
    *b=temp;
}

int Partition(int* array,int front, int end){

    int pivotkey;
    int mid=front+(end-front)/2;
    
    if(array[front]>array[end]){
        swap(&array[front],&array[end]);
    }
    if(array[mid]>array[end]){
        swap(&array[mid],&array[end]);
    }
    if(array[mid]>array[front]){
        swap(&array[mid],&array[front]);
    }
    
    pivotkey=array[front];

    while(front<end){

        while (front<end && array[end]>=pivotkey){
            end--;
        }
        swap(&array[end],&array[front]);

        while (front<end && array[front]<=pivotkey){
            front++;
        }
        swap(&array[end],&array[front]);

    }

    return front;

}

void quicksort(int* array, int front, int end){

    int pivot;

    if(front<end){

        pivot=Partition(array,front,end);
        quicksort(array,front,pivot-1);
        quicksort(array,pivot+1,end); 
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    
    quicksort(nums1,0,nums1Size-1);
    quicksort(nums2,0,nums2Size-1);
    
    if(nums1Size>nums2Size)
        *returnSize=nums1Size;
    else
        *returnSize=nums2Size;
    
    int* res=(int*)malloc(sizeof(int)*(*returnSize));
    int count=0;
    int k=0;
    
    for(int i=0;i<nums1Size;i++){
        
        for(int j=k;j<nums2Size;j++){
            
            if(nums1[i]==nums2[j]){
                
                res[count++]=nums1[i];
                k=j+1;
                break;
            }
            
        }
        
    }
    *returnSize=count;
        
    return res;
    

}