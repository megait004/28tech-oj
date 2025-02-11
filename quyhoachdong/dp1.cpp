#include <iostream>
#include <vector>
using namespace std;

int longestCommonSubsequence(const string &S, const string &T) {
    int m = S.size(), n = T.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    return dp[m][n];
}

int main() {
    string S, T;
    cin >> S >> T;
    cout << longestCommonSubsequence(S, T) << endl;
    return 0;
}
