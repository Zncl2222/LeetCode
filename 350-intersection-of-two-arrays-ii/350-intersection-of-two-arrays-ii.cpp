class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        int count = 0;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        auto itr2_start = nums2.begin();
        for(auto itr = nums1.begin(); itr != nums1.end(); itr++){
            
            for(auto itr2 = itr2_start; itr2 != nums2.end(); itr2++){
                
                if(*itr == *itr2){
                    res.push_back(*itr);
                    itr2_start = itr2 + 1;
                    break;
                }
            }
        }
        return res;
    }
};