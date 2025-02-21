class Solution {
    public:
        int canBeTypedWords(string text, string brokenLetters) {
            vector<string> store;
            stringstream ss(text);
            string word;
            while (ss >> word) {
                store.push_back(word);
            }
            bool flag = false;
            int count = 0;
            for (int i = 0; i < store.size(); i++) {
                flag = false;
                string str = store[i];
                for (int j = 0; j < brokenLetters.size(); j++) {
                    int pos = str.find(brokenLetters[j]);
                    if (pos != string::npos) {
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    count += 1;
                }
            }
            return count;
        }
    };