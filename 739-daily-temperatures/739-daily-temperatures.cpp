class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int curr_day;
        int curr_temp;
        int prev_day;
        int prev_temp;
        int n = temperatures.size();
        
        stack<pair<int,int>> st;
        vector<int> res(n);
        
        for(int i = 0; i < n; i++){
            
            curr_day = i;
            curr_temp = temperatures[i];
            while(!st.empty() && curr_temp > st.top().second){
                prev_day = st.top().first;
                prev_temp = st.top().second;
                st.pop();
                
                res[prev_day] = curr_day - prev_day;
            }
            
            st.push({curr_day, curr_temp});
        }
        return res;
    }
};