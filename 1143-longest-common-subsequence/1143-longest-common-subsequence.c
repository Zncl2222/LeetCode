#include <string.h>

int longestCommonSubsequence(char * text1, char * text2){
    int n1 = strlen(text1);
    int n2 = strlen(text2);
    int** dp = malloc((n1 + 1) * sizeof(int*));
    for (int i = 0; i < (n1 + 1); i++) {
        dp[i] = calloc((n2 + 1), sizeof(int));
    }

    for (int i = n1 - 1; i >= 0; i--) {
        for (int j = n2 - 1; j >= 0; j--) {
            if (text1[i] == text2[j]) {
                dp[i][j] = dp[i + 1][j + 1] + 1;
            } else {
                dp[i][j] = fmax(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    return dp[0][0];
}
