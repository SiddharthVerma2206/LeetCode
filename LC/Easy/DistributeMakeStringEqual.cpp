class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>count;
        for(auto u:words) 
        {
            for(auto g:u) count[g]++;
        }
        for(auto u:count){
            if(u.second%words.size()!=0) return false;
        }
        return true;
    }
};