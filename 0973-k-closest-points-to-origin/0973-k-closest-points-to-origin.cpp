class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, pair<int, int>>> pq;
        for (auto& p:points) {
            double x = p[0];
            double y = p[1];
            double distance = x * x + y * y; // Don't need to sqrt cause it just a comparison
            pq.push({distance, {x, y}});
            if (pq.size() > k)
                pq.pop();
        }
        vector<vector<int>> res;
        
        while (!pq.empty()) {
            res.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return res;
    }
};