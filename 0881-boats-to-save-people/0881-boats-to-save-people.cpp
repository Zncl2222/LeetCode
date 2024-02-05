class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int boat_required = 0;
        int lightest_idx = 0;
        int heaviest_idx = people.size() - 1;
        
        while (lightest_idx <= heaviest_idx) {
            if (people[lightest_idx] + people[heaviest_idx] <= limit) {
                --heaviest_idx;
                ++lightest_idx;
            } else {
                --heaviest_idx;
            }
            ++boat_required;
        }
        return boat_required;
    }
};