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


bool containsDuplicate(int* nums, int numsSize){
    
    quicksort(nums,0,numsSize-1);
    
    for (int i=0;i<numsSize-1;i++){
        
        if (nums[i]==nums[i+1])
            return true;
        
    }
    
    return false;
}