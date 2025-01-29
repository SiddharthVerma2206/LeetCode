class Solution {
public:
    bool solve(vector<int>&nums)
    {
        int n = nums.size();
        for(int i=0;i<n-1;i++)
            if(nums[i] >= nums[i+1]) return false;
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) 
    {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            vector<int>opps;
            for(int j=0;j<n;j++)
                if(i != j) opps.push_back(nums[j]);
            if(solve(opps)) return true;
        }
        return false;
    }
};