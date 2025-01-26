class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> incNum;
        deque<int> decNum;
        int max_len = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            while (!incNum.empty() && nums[right] < incNum.back()) {
                incNum.pop_back();
            }
            incNum.push_back(nums[right]);
            while (!decNum.empty() && nums[right] > decNum.back()) {
                decNum.pop_back();
            }
            decNum.push_back(nums[right]);

            while (decNum.front() - incNum.front() > limit) {
                if (nums[left] == decNum.front()) {
                    decNum.pop_front();
                }
                if (nums[left] == incNum.front()) {
                    incNum.pop_front();
                }
                ++left;
            }
            max_len = std::max(max_len, right - left + 1);
        }
        return max_len;
    }
};