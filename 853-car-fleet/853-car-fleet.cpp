class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n = position.size();
        double t;
        
        vector<pair<int, double>> cars;
        
        for(int i = 0; i < n; i++){
            t = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], t});
        }
        sort(cars.begin(), cars.end());
        
        double maxt = 0;
        int res = 0;
        
        for(int i = n - 1; i >= 0; i--){
            
            t = cars[i].second;
            if(t > maxt){
                maxt = t;
                res++;
            }
        }
        return res;
    }
};