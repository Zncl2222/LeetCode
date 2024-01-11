class NumArray {
public:
    vector<int> array;
    NumArray(vector<int>& nums) {
        for (auto &n: nums) {
            array.push_back(n);
        }
    }
    
    int sumRange(int left, int right) {
        int res = 0;
        for (int i = left; i < right + 1; i++) {
            res += array[i];
        }
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */