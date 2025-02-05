class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> result;
        string currString;
        generateStrings(result, currString, n, -1);
        return result;
    }

private:
    void generateStrings(vector<string>& result, string& currString, int n, int lastChar) {
        if (currString.length() == n) {
            result.push_back(currString);
            return;
        }
        currString.push_back('1');
        generateStrings(result, currString, n, 1);
        currString.pop_back();
        if (lastChar != 0) {
            currString.push_back('0');
            generateStrings(result, currString, n, 0);
            currString.pop_back();
        }
    }
};