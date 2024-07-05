class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;

        std::vector<std::vector<bool>> dp(s.length(),
                                          std::vector<bool>(s.length(), false));

        for (int i = 0; i < s.length(); ++i) {
            dp[i][i] = true;
            ++count;
        }

        for (int i = 0; i < s.length() - 1; ++i) {
            dp[i][i + 1] = (s[i] == s[i + 1]);
            count += dp[i][i + 1];
        }

        for (int length = 3; length <= s.length(); ++length) {
            for (int i = 0, j = length - 1; j < s.length(); ++i, ++j) {
                dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
                count += dp[i][j];
            }
        }

        return count;
    }
};