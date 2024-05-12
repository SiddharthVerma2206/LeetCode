//Runtime : 0ms
//Memory : 7mb
class Solution {
public:
    bool isValid(string s) {
        stack<char> stak;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stak.push(s[i]);
            } else{
                if(stak.empty()){
                    return false;
                }
            if(stak.top()=='('&&s[i]==')'||stak.top()=='['&&s[i]==']'||stak.top()=='{'&&s[i]=='}'){
                    stak.pop();
            } else{
                return false;
            }
        }
    }
        return stak.empty();
        
    }
};