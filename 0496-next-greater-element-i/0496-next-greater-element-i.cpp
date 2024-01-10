class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums_map;
        stack<int> nums_st;
        vector<int> res(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); ++i) {
            nums_map[nums1[i]] = i;
        }
        
        for (int i = 0; i < nums2.size(); ++i) {
            while (!nums_st.empty() && nums_st.top() < nums2[i]) {
                int curr = nums_st.top();
                nums_st.pop();
                
                if (nums_map.find(curr) != nums_map.end()) {
                    res[nums_map[curr]] = nums2[i]; 
                }
            }
            nums_st.push(nums2[i]);
        }
        return res;
    }
};