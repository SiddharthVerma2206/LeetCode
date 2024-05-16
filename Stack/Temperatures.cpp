class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temps) {
        std::vector<int> answer(temps.size());
        std::stack<int> stk;
        /// UPVOTE !
        for (int i = 0; i < temps.size(); i++) {
            while (!stk.empty() && temps[stk.top()] < temps[i]) {
                answer[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }

        return answer;
    }
};