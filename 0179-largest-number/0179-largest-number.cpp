class Solution {
public:
    static bool cmp(string a, string b){
        return a+b > b+a;
    }

    string largestNumber(vector<int>& nums) {
        string res = "";
        
        vector<string> numbers;
        
        for (int iter: nums) {
            numbers.push_back(to_string(iter));
        }
        
        sort(numbers.begin(), numbers.end(), cmp);
        if (numbers[0] == "0") {
            return "0";
        }
        
        for (string n: numbers) {
            res += n;
        }
        return res;
    }
};