class Solution {
public:
    int getScore(vector<int>& player){
        int s = 0, f = 0;
        for(auto p:player){
            s += (f > 0)? 2*p: p;
            f--;
            if(p == 10) f = 2;
        }
        return s;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int s1 = getScore(player1), s2 = getScore(player2);
        if(s1 > s2) return 1;
        if(s1 < s2) return 2;
        return 0;
    }
};