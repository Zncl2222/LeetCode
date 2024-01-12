#define MAX(a, b) a > b ? a : b

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> gap_map;
        int max_end = 0;

        for (int i = 0; i < wall.size(); i++) {
            int gap = 0;
            for (int j = 0; j < wall[i].size() - 1; j++) {
                gap += wall[i][j];
                if (gap_map.find(gap) != gap_map.end()) {
                    gap_map[gap]++;
                } else {
                    gap_map[gap] = 1;
                }
                max_end = MAX(max_end, gap_map[gap]); 
            }
        }
        

        return wall.size() - max_end;
    }
};