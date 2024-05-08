class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded="";
        for(string s : strs){
            encoded+=to_string(s.size())+ "#" + s;
        }
        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string>ans;
        int i=0 ;
        while(i<s.size()){
            int index= s.find("#" , i);
            int len = stoi(s.substr(i , index-1));
            ans.push_back(s.substr(index+1 , len));
            i = index + len +1;
        }
        return ans;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));