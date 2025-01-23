class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double> avg;
        while(!nums.empty())
        {
            int min=nums.front();
            nums.erase(nums.begin());
            int max=nums.back();
            nums.pop_back(); 
            avg.push_back((min+max)/2.0);
        }

        return *min_element(avg.begin(),avg.end());
    }
};