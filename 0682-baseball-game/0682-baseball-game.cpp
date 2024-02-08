class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> records;
        int total =  0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "D") {
                total += 2 * records.top();
                records.push(2 * records.top());
            } else if (operations[i] == "C") {
                total -= records.top();
                records.pop();
            } else if (operations[i] == "+") {
                int first_previous = records.top();
                records.pop();
                int second_previous = records.top();
                int res = first_previous + second_previous;
                total += res;
                records.push(first_previous);
                records.push(res);
            } else {
                total += stoi(operations[i]);
                records.push(stoi(operations[i]));
            }
        }
        return total;
    }
};