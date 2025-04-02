class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int>mp;
        for(int i=0 ; i<nums.size() ; i++){
            if(mp.find(nums[i]) != mp.end()){
                result[0] = mp[nums[i]];
                result[1] = i;
            }else{
                mp[target - nums[i]] = i;
            }
        }
        return result;
    }
};
