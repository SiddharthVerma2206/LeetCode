class Solution {
public:
    string reformatNumber(string number) {
        string digits = "";
        for (char c : number) {
            if (isdigit(c)) {
                digits += c;
            }
        }
        
        string formatted = "";
        int i = 0;
        while (i < digits.length()) {
            if (digits.length() - i == 4) {
                formatted += digits.substr(i, 2);
                formatted += "-";
                formatted += digits.substr(i+2, 2);
                break;
            } else if (digits.length() - i < 4) {
                formatted += digits.substr(i);
                break;
            } else {
                formatted += digits.substr(i, 3);
                formatted += "-";
                i += 3;
            }
        }
        
        return formatted;
    }
};