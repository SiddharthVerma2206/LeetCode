class Solution {
    public:
        int arrangeCoins(int n){
            long long result=(-1+sqrt(1+8*(long long)n))/2;
            return result;
        }
    };