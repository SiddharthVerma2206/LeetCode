class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty()){
            return res;
        }
        unordered_map<char , string>numtoletter = {
            {'2' , "abc"},
            {'3' , "def"},
            {'4' , "ghi"},
            {'5' , "jkl"},
            {'6' , "mno"},
            {'7' , "pqrs"},
            {'8' , "tuv"},
            {'9' , "wxzy"}
        };

        backtrack(digits , 0 , "" , res , numtoletter);

        return res;
    }

private:
    void backtrack(const string &digis , int index , string curr , vector<string>& res ,const unordered_map<char , string>& numtoletter){
        if(index==digis.length()){
            res.push_back(curr);
            return ;
        }

        string letters = numtoletter.at(digis[index]);
        for(char letter : letters){
            backtrack(digis , index+1 , curr + letter , res , numtoletter);
        }
    }
};