class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size();  
        int mid = n / 2;      

        int i = n - 1;  
        int j = mid - 1;  
        int removals = 0;  

        while (j >= 0) {
            if (nums[i] > nums[j]) {
                removals += 2;  
                i--;
            }
            j--;
        }
        return n - removals;
    }
};