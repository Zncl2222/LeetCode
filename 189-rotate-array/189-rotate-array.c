void rotate(int* nums, int numsSize, int k){
       
    int* temp=(int*)malloc(numsSize*sizeof(int));
    int j=0;
    
    if(k>numsSize)
        k=k%numsSize;
    
    for(int i=numsSize-k; i<numsSize; i++){

        temp[j++]=nums[i];
    }

    for (int i=0; i<numsSize-k; i++){

        temp[j++]=nums[i];
    }

    for(int i=0 ;i<numsSize; i++){

        nums[i]=temp[i];      
    }

    free(temp);
  
}