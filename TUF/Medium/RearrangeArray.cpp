class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n=nums.length;
        int[] ans = new int[n];
        int i=0; int j=0; int k=1;
        while(i<n){
            if(nums[i]<0){
                ans[k++]=nums[i++];
                k++;
            } else if(nums[i]>0){
                ans[j++]=nums[i++];
                j++;
            }
        }
        return ans;
    }
}