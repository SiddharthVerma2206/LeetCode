class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int max=0;
    int n= nums.size();
    int ans=0;
    for(int i=0 ;i<n;i++)
    {
        if(nums[i]==1)
        ans++;
        else{
            if(max < ans)
              max=ans;
          ans=0;
        }
    }
    if(max<ans)
    max=ans;
    return max;
  
    }
};