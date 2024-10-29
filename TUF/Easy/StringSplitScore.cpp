class Solution {
public:
    int maxScore(string s) {
        int totalOne = 0;
        for (char c : s) {
            if (c == '1'){
            totalOne++;
            } 
        }
        int maximum = 0;
        int totalZero = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') {
                totalZero++;
            } else {
                totalOne--;
            }
            maximum = max(maximum, totalZero + totalOne);
        }
        return maximum;
    }
};
