// runtime - 12ms
// memory - 15mb
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>answer(2);
        unordered_map<int , int>Map;
        for(int i=0 ; i<nums.size() ; i++){
            if(Map.find(nums[i])!=Map.end()){
                answer[0]=Map[nums[i]];
                answer[1]=i;
            }
            else{
                Map[target - nums[i]]=i;
            }
        }
        return answer;
    }
};