# define MAX(a,b) (a>b?a:b)
# define MIN(a,b) (a<b?a:b)

int trap(int* height, int heightSize){

    int head = 0;
    int tail = heightSize - 1;

    int left_max = 0;
    int right_max = 0;
    int area = 0;
    
    int* left_array = (int*)malloc(heightSize*sizeof(int));
    int* right_array = (int*)malloc(heightSize*sizeof(int));
    int* min_array = (int*)malloc(heightSize*sizeof(int));
    
    
    for(int i = heightSize - 1; i >= 0; i--){
        
        right_array[i] = MAX(right_max, height[i]);
        right_max = MAX(right_max, height[i]);
    }
    
    for(int i = 0; i < heightSize; i++){
        
        left_array[i] = MAX(left_max, height[i]);
        left_max = MAX(left_max, height[i]);
        min_array[i] = MIN(left_array[i], right_array[i]);
        
        area += (min_array[i] - height[i]) > 0 ? (min_array[i] - height[i]) : 0;
    }
    
    return area;
}