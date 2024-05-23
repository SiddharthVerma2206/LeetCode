class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>hashtable(26 , 0);
        int m = s1.size();
        int n = s2.size();
        if(m>n){
            return false;
        }
        for(int i=0 ; i<m ; i++){
            hashtable[s1[i]-'a']++;
            hashtable[s2[i]-'a']--;
        }
        if(isperm(hashtable)){
            return true;
        }
        for(int i =m ; i<n ; i++){
            hashtable[s2[i]-'a']--;
            hashtable[s2[i-m]-'a']++;
            if(isperm(hashtable)){
                return true;
            }
        }
        return false;
    }
private:
    bool isperm(vector<int>& hash){
        for(int i =0 ; i<26 ; i++){
            if(hash[i]!=0){
                return false;
            }
        }
        return true;
    }
};