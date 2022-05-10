class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int low=0, high=numbers.size()-1;
        
        vector<int> res(2);
        
        while(low<high){
            
            if(target==numbers[low]+numbers[high]){
                res[0]=low+1;
                res[1]=high+1;
                break;
            }
            else if(target<numbers[low]+numbers[high]){
                high--;
            }
            else{
                low++;
            }
            
        }
        
        return res;
        
    }
};