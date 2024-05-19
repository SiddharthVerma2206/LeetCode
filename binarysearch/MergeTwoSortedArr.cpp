class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int firstsize = nums1.size() , secondsize = nums2.size();
        vector<int>vec;
        vec.reserve(firstsize+secondsize);
        int i =0 , j=0 ;
        while(i<firstsize && j<secondsize){
            if(nums1[i]<nums2[j]){
                vec.push_back(nums1[i]);
                i++;
            }else{
                vec.push_back(nums2[j]);
                j++;
            }
        }
        while(i<firstsize){
            vec.push_back(nums1[i]);
            i++;
        }
        while(j<secondsize){
            vec.push_back(nums2[j]);
            j++;
        }
        int totalsize=firstsize+secondsize;
        int mid=totalsize/2;
        double ans = (totalsize%2==0?(double)(vec[mid]+vec[mid-1])/2 : vec[mid]);
        return ans;
    }
};