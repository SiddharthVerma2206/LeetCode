class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(int i=0 ; i<tokens.size() ; i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="/" || tokens[i]=="*"){
                int n = stk.top();stk.pop();
                int m = stk.top();stk.pop();
                if(tokens[i]=="+"){stk.push(m+n);}
                else if(tokens[i]=="-"){stk.push(m-n);}
                else if(tokens[i]=="/"){stk.push(m/n);}
                else{stk.push(m*n);}
            }
            else{stk.push(stoi(tokens[i]));}
        }
        return stk.top();
    }
};