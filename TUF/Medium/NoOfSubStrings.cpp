class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size(), res = 0, k = 0;
        for (int i = 1; i * i <= n; i++) {
            deque<int> z;  
            int lz = -1, o = 0;      
            for (int j = 0; j < n; j++) {
                if (s[j] == '0') {
                    z.push_back(j);   
                    while (z.size() > i) {
                        o -= (z[0] - lz - 1), lz = z.front(), z.pop_front();
                    }
                } else o++;
                if (z.size() == i && o >= i * i) res += min(z[0] - lz, o - i * i + 1);
            }
        }
        while (k < n) {
            if (s[k] == '0') {k++; continue;}
            int sz = 0;
            while (k < n && s[k] == '1') {sz++, k++;}
            res += (sz * (sz + 1)) / 2;
        }
        return res;
    }
};
static const int init = []{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();