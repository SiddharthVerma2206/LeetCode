class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>Set(nums.begin() , nums.end());
        int maxcount=0;
        for(int n : nums){
            if(Set.find(n-1)==Set.end()){
                int currEle = n;
                int count =1;
                while(Set.find(currEle+1)!=Set.end()){
                    currEle++;
                    count++;
                }
                maxcount=max(maxcount , count);
            }
        }
        return maxcount;
    }
};