class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(-1);
        stack<pair<int , int>>stk;
        int maxarea=0;
        for(int i =0 ; i<heights.size() ; i++){
            int startind=i;
            while(!stk.empty() && heights[i]<stk.top().first){
                auto [height , inde] = stk.top();
                stk.pop();
                maxarea = max(maxarea , height*(i-inde));
                startind= inde;
            }
            stk.push({heights[i] , startind});
        }
        return maxarea;
    }
};