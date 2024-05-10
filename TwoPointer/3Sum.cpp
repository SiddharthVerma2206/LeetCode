class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;
       if(nums.size()<3){return ans;}
       sort(nums.begin() , nums.end());
    for(int i =0 ; i<nums.size()-2 ; i++){
        if(i>0  &&  nums[i] == nums[i-1]){
            continue;
        }
        int j =i+1;
        int k = nums.size()-1;
        int target = -nums[i];
        while(j<k){
            if(nums[j]+nums[k]==target){
            ans.push_back({nums[i] , nums[j] , nums[k]});
             while(j < k  &&  nums[j] == nums[j+1]) {j++;}
             while(j < k  &&  nums[k] == nums[k-1]) {k--;}
            j++;k--;
            }else if(nums[j]+nums[k]<target){
                j++;
            }else{
                k--;
            }
       }
    }
    return ans;
   }
};