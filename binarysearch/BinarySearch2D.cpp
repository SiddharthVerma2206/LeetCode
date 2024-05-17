class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size() , cols = matrix[0].size();
        int atrow = 0 , atcol = cols-1;
        while(atrow<matrix.size() && atcol > -1){
            if(matrix[atrow][atcol]==target){
                return true;
            }
            else if(matrix[atrow][atcol]<target){
                atrow++;
            }
            else{
                atcol--;
            }
        }
        return false;
    }
};