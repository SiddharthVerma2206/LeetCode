class Solution {
    public:
        int countAsterisks(string s) {
            int result = 0;
            bool isPair = false;
            for(char c : s){
                if(c == '|'){
                    isPair = !isPair;
                }
                if(!isPair && c == '*'){
                    result++;
                }
            }
            return result;
        }
    };