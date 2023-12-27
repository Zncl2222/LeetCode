class Solution {
public:
    int arrangeCoins(int n) {
        int curr_row_num = 1;
        int accumulate_coin = 0;
        while (n - curr_row_num >= 0) {
            n = n - curr_row_num;
            curr_row_num += 1;
            accumulate_coin += 1;
        }
        return accumulate_coin;
    }
};