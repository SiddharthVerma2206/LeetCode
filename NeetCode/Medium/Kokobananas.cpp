class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1
        , high = *max_element(piles.begin(), piles.end()),mid;
        while (low <= high) {
            mid = (low + high) / 2;
            double k=0;
            for(int i=0;i<piles.size();i++){
                k+=ceil((double)piles[i]/(double)mid);
            }
            if(k>h){
                low=mid+1;
            }else {
                high=mid-1;
            }
        }
        return low;
    }
};