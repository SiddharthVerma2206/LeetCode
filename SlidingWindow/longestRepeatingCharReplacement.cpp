class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxreplace = 0;
        vector<int>count(26,0);
        int i=0 , j=0 ,result=0;
        while(j<s.length()){
            count[s[j]-'A']++;
            maxreplace= max(maxreplace , count[s[j]-'A']);
            if(j-i+1-maxreplace > k){
                count[s[i]-'A']--;
                i++;
            }
            result = max(result , j-i+1);
            j++;
        }
        return result;
    }
};