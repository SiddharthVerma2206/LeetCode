//Runtime : 21ms
//Memory : 23mb
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>Map;
        for(int i=0 ; i<strs.size() ; i++){
            string temp = strs[i];
            sort(temp.begin() , temp.end());
            if(Map.find(temp)!= Map.end()){
                Map[temp].push_back(strs[i]);
            }else{
                Map[temp] = {strs[i]};
            }
        }
        vector<vector<string>>Answers;
        for(auto& it : Map){
            Answers.push_back(it.second);
        }
        return Answers;
    }
};
