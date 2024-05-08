//Runtime : 14ms
//Memory : 24mb
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0 ; i<9 ; i++){
            unordered_map<char , int>Map;
            for(int j =0 ; j<9 ; j++){
                if(board[i][j]!='.'){
                    if(Map.find(board[i][j])==Map.end()){
                        Map[board[i][j]]++;
                    }else{
                        return false;
                    }
                }
            }
        }
        for(int j =0 ; j<9 ; j++){
            unordered_map<char , int>Map;
            for(int i =0 ; i<9 ; i++){
                if(board[i][j]!='.'){
                    if(Map.find(board[i][j])==Map.end()){
                        Map[board[i][j]]++;
                    }else{
                        return false;
                    }
                }
            }
        }
            vector<unordered_set<char>>hashloc(9);
            for(int i =0 ; i<9 ; i++){
                for(int j =0 ; j<9 ; j++){
                    int loc=(i/3)*3+ j/3 ;
                    if(board[i][j]!='.' &&  hashloc[loc].find(board[i][j])!=hashloc[loc].end()){
                        return false;
                    }
                    hashloc[loc].insert(board[i][j]);
                }
            }
    return true;
    }
};