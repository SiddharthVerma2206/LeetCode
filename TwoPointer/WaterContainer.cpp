class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0;
        while(i<j){
            if(height[i]<height[j]){
                ans=max((j-i)*height[i],ans);
                i++;
            }
            else if(height[i]>height[j]){
                ans=max((j-i)*height[j],ans);
                j--;
            }
            else{
                ans=max((j-i)*height[i] , ans);
                i++;
                j--;
            }
        }
        return ans;
    }
};