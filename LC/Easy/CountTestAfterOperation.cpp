class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int result =0 ;
        for(int i=0;i<batteryPercentages.size();i++)
        {
            if(batteryPercentages[i] > 0)
            {
                result++;
                for(int j=i;j<batteryPercentages.size();j++)
                {
                    batteryPercentages[j] = batteryPercentages[j] - 1;
                }
            }
        }
        return result;
    }
};