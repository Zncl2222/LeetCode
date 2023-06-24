class Solution {
    int _target;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        _target = target;
        vector<int> current;
        vector<vector<int>> results;
        
        dfs(candidates, 0, 0, current, results);
        return results;
    }
private:
    void dfs(
        vector<int>& candidates,
        int sum,
        int start,
        vector<int>& current,
        vector<vector<int>>& results
    ) {
        if (sum > _target) {
            return;
        }
        if (sum == _target) {
            results.push_back(current);
            return;
        }
        
        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            dfs(candidates, sum + candidates[i], i, current, results);
            current.pop_back();
        }
    }
};