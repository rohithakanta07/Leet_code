class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>arr;
        sort(timePoints.begin(),timePoints.end());
        for(int i = 1 ; i < timePoints.size(); i++){
            int h1= stoi(timePoints[i].substr(0,2));
            int m1= stoi(timePoints[i].substr(3,2));
            int hgtime = h1*60+m1;

            int h2= stoi(timePoints[i-1].substr(0,2));
            int m2= stoi(timePoints[i-1].substr(3,2));
            int lwtime = h2*60+m2;

            arr.push_back(hgtime-lwtime);
        }
        // int sttime = (stoi(timePoints[0].substr(0,2)*60) +(stoi(timePoints[0].substr(3,2)));
        // int endtime = (stoi(timePoints.back().substr(0,2)*60) +(stoi(timePoints.back().substr(3,2)));
        // int circularDiff = (1440 - endtime) + sttime;  
        // arr.push_back(circularDiff);
        int firstTimeMinutes = stoi(timePoints[0].substr(0, 2)) * 60 + stoi(timePoints[0].substr(3, 2));
        int lastTimeMinutes = stoi(timePoints.back().substr(0, 2)) * 60 + stoi(timePoints.back().substr(3, 2));
        int circularDiff = (1440 - lastTimeMinutes) + firstTimeMinutes;  // 1440 minutes = 24 hours
        arr.push_back(circularDiff);

        sort(arr.begin(),arr.end());
        
        return arr[0];
    }
};