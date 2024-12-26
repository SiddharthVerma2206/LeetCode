class Solution {
public:
    bool checkRecord(string s) {
        int late =0;
        int count=0;
        int absent=0;

        int i=0;
        while(i<s.size()){
            if(s[i]=='A')absent++;

            if(s[i]=='L' ){
                while(i<s.size()){
                    if(s[i]!='L'){
                        if(s[i]=='A') absent++;
                        break;
                    }
                    count++;
                    i++;

                }
                late=max(count, late);
                count=0;
            }
            if(absent>1 || late>2) return false; 
            i++;
        }
        return true;
        
    }
};