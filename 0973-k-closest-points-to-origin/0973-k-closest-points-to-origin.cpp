class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> temp;
        for (auto& itr: points ) {   
           temp.push_back({itr[0] * itr[0] + itr[1] * itr[1], itr[0], itr[1]}); 
        }
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq(temp.begin(), temp.end());
        vector<vector<int>> res;
        while (k--) {
            res.push_back({pq.top()[1], pq.top()[2]});
            pq.pop();
        }
        return res;
        
    }
};