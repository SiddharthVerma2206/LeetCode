//Runtime : 8ms
//Memory : 17mb
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>Map;
        for(int n : nums){
            Map[n]++;
        }
        vector<pair<int , int>>vecPair(Map.begin() , Map.end());
        sort(vecPair.begin() , vecPair.end() , [](const pair<int , int>& a , const pair<int , int >& b){return a.second>b.second;});
        vector<int>answer(k);
        for(int i =0 ; i<k ; i++){
           answer[i]=vecPair[i].first;
        }
        return answer;
    }
};