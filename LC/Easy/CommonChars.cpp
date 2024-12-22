class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>result;
        for(char c = 'a';c<='z';c++){
            int minCount = INT_MAX;

            for(string word : words){
                int count=0;
                for(char ch : word){
                    if(ch == c){
                        count++;
                    }
                }
                minCount = min(minCount,count);
                if(minCount==0){
                    break;
                }
            }

            for(int i = 0 ; i<minCount;i++){
                result.push_back(string(1,c));
            }
        }
        return result;
    }
};