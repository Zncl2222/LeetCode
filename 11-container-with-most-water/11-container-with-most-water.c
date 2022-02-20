#define MAX(a,b)(a>=b?a:b)
#define MIN(a,b)(a<=b?a:b)

int maxArea(int* height, int heightSize){
    
    int area=0;
    int i=0,j=heightSize-1;
    
    
    while(i<j){
        
        area=MAX(area,MIN(height[i],height[j])*(j-i));
       
        (height[i] < height[j] ? i++ : j--);
    }
    

    return area;

}