class NumArray {
public:
    vector<int> prefix_sum;
    NumArray(vector<int>& nums) {
        int count = 0;
        for (auto &n: nums) {
            count += n;
            prefix_sum.push_back(count);
        }
    }
    
    int sumRange(int left, int right) {    
        if (left - 1 >= 0) {
            return prefix_sum[right] - prefix_sum[left - 1];
        }
        return prefix_sum[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */