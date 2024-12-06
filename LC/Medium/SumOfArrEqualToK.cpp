class Solution {
public:
    int minOperations(int k) {
        int ans=INT_MAX;
        if(k==1){
            return 0;
        }
        int num;
        for(int i=2;i<=k;i++){
            if(k%i==0){
                num=(k/i)-1;
            }else{
                num=(k/i);
            }
            ans=min(ans,i-1+num);
        }
        return ans;
    }
};