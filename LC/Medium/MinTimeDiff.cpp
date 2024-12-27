class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        if(timePoints.size() > 1440) return 0; // PigeonHole

        vector<bool> minutes(1440, false);
        for(const string& time : timePoints){
            int minute = toMinute(time);
            if(minutes[minute]) return 0; // Duplicate
            minutes[minute] = true;
        }

        int first = -1, prev = -1, minDiff = INT_MAX;
        for (int i = 0; i < 1440; ++i) {
            if (minutes[i]) {
                if (first == -1) { first = i; }
                else { minDiff = min(minDiff, i - prev); }
                prev = i;
            }
        }
        minDiff = min(minDiff, 1440 - prev + first);

        return minDiff;
    }
private:
    int toMinute(const string& time) {
        return ((time[0] - '0') * 10 + (time[1] - '0')) * 60 + ((time[3] - '0') * 10 + (time[4] - '0'));
    }
};