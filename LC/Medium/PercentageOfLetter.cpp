class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        int l=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]==letter)
            c++;
        }
        int ans = (c *100)/l;
        return ans;
    }
};