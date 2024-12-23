class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        auto generateSubstrings = [](const string& s) {
            vector<string> subs;
            for (int i = 0; i < s.size(); ++i) {
                string sub;
                for (int j = i; j < s.size(); ++j) {
                    sub += s[j];
                    subs.push_back(sub);
                }
            }
            sort(subs.begin(), subs.end(), [](const string& a, const string& b) {
                return a.size() < b.size() || (a.size() == b.size() && a < b);
            });
            return subs;
        };

        int n = arr.size();
        vector<string> ans(n, "");

        for (int i = 0; i < n; ++i) {
            auto allSubs = generateSubstrings(arr[i]);
            for (const auto& sub : allSubs) {
                bool unique = true;
                for (int j = 0; j < n; ++j) {
                    if (i != j && arr[j].find(sub) != string::npos) {
                        unique = false;
                        break;
                    }
                }
                if (unique) {
                    ans[i] = sub;
                    break;
                }
            }
        }
        return ans;
    }
};