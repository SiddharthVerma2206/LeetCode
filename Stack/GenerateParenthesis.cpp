class Solution {
public:
    vector<string>result;
    void recurFunctn(string str , int opens , int closes , int N){
        if(str.length()==2*N){
            if(opens==closes){
                result.push_back(str);
            }
            return;
        }
        if(opens<N){
            recurFunctn(str+"(" , opens+1 , closes , N);
        }
        if(closes<opens){
            recurFunctn(str+")" , opens , closes+1 , N);
        }
    }
    vector<string> generateParenthesis(int n) {
        recurFunctn("" , 0 , 0 , n);
        return result;
    }
};