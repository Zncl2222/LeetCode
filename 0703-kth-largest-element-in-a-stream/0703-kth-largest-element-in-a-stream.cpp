class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        k_largest = k;
        for (auto n:nums) {
            pq.push(n);
        }
        while (pq.size() > k_largest) {
            pq.pop();
        }
    }
    int add(int val) {
        pq.push(val);
        if (pq.size() > k_largest) {
            pq.pop();
        }
        return pq.top();
    }
private:
    int k_largest;
    priority_queue<int, vector<int>, greater<int>> pq;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */