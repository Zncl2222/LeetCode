

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    
    int* res=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    
    int low=0, high=numbersSize-1;
    
    for(int i=0; i<numbersSize; i++){

        if(target==numbers[low]+numbers[high]){
            res[0]=low+1;
            res[1]=high+1;
            return res;
        }
        else if(target<numbers[low]+numbers[high]){
            high--;
        }
        else{
            low++;
        }
              
    }
    
    *returnSize=0;
    return res;

}