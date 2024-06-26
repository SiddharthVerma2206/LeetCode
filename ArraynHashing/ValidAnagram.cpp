//runtime - 3ms
//memory - 8mb
class Solution {
public:
    bool isAnagram(string s, string t) {
       int hash[26];
       for(int i =0 ; i<s.length() ; i++){
        hash[s[i]-'a'] += 1;
       }
       for(int i =0 ; i<t.length() ; i++){
        hash[t[i]-'a'] -= 1;
       }
       for(int i =0 ; i<26 ; i++){
        if(hash[i] != 0){return false;}
       }
       return true;
    }
};