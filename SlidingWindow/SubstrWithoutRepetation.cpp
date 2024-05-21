class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0 , j=0 , strlen=s.length();
        int maxlen = 0;
        unordered_map<char , int>uMap;
        while(j<strlen){
            if(uMap.find(s[j]) == uMap.end() || uMap[s[j]]<i){
                uMap[s[j]] = j;
                maxlen = max(maxlen , j-i+1);
                j++;
            }
            else{
                i=uMap[s[j]]+1;
            }
        }
        return maxlen;
    }
};