class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    
        priority_queue<int> pq;
        
        int x, y;
        
        for (auto s:stones) {
            pq.push(s);
        }

        while (pq.size() > 1) {
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            if (x != y)
                pq.push(abs(y - x));
        }
        if (pq.empty())
            return 0;

        return pq.top();
    }
};