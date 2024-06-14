class Solution {
public:
    void find(int num,int target,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&tempvec){
        if(num==candidates.size()){
            if(target==0){
                ans.push_back(tempvec);
            }
            return ;
        }
        if(candidates[num]<=target){
            tempvec.push_back(candidates[num]);
            find(num,target-candidates[num],candidates,ans,tempvec);
            tempvec.pop_back();
        }
        find(num+1,target,candidates,ans,tempvec);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>tempvec;
        find(0,target,candidates,ans,tempvec);
        return ans;
    }
};
