class Solution {
public:
    int maxVowels(string s, int k) {
        set<char>st={'a','e','i','o','u'};
        int i=0,j=0;
        int n=s.size();
        int cnt=0;
        int ans=0;
        while(j<n){
            if(st.count(s[j])) cnt++;
            if(j-i+1==k){
                ans=max(ans,cnt);
                while(j-i+1>=k){
                    if(st.count(s[i]))cnt--;
                    i++;
                }
            }
          j++;

        }
        return ans;
    }
};