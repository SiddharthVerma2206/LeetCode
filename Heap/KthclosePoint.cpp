class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>result;
        multiset<pair<int,vector<int>>>ms;
        for(auto it : points){
            long long a = (abs(it[0]))*(abs(it[0])) + (abs(it[1]))*(abs(it[1]));
            ms.insert({a , it});
        }
        while(k--){
            pair<int , vector<int>>p = *ms.begin();
            result.push_back(p.second);
            ms.erase(ms.begin());
        }
        return result;
    }
};