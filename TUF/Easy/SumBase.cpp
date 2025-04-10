class Solution {
public:
    int sumBase(int n, int k) {
        int num = 0, i=0, ans=0;
        while(n)   
        {
            int rem = n%k;
            num = rem * pow(10,i) + num;
            n=n/k;
            i++;
        }
        while(num) 
        {
            int digit = num%10;
            ans = ans + digit;
            num = num/10;
        }
        return ans;
    }
};