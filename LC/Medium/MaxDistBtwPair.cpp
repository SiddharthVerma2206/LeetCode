class Solution {
    public:
        int maxDistance(vector<int>& nums1, vector<int>& nums2) {
            int dist,maxDist;
            for(int i =0;i<nums1.size() ; i++){
                for(int j = i ; j<nums2.size() ; j++){
                    if(nums1[i]<=nums2[j]){
                        dist = j-i;
                        maxDist = max(dist , maxDist);
                    }
                }
            }
            return maxDist;
        }
    };