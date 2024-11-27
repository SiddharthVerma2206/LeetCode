class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int n = nums.size()-1;
        int r = n;
        int mid =0;
        if(target>nums[r]){
            return n+1;
        }
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
                l=mid+1;
            }
            if(nums[mid]>target){
                r = mid -1;
            }
        }
        return l;
    }
};
