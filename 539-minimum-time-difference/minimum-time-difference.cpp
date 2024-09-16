class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>x;

        for(int i =0 ;i <timePoints.size();i++){
            int hour=(timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0');
            int minute=(timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0');
            int z = hour*60+minute;
            x.push_back(z);
        }
        sort(x.begin(),x.end());
        int minConsecutive=INT_MAX;
        for(int i=1;i<x.size();i++){
            minConsecutive=min(minConsecutive,x[i]-x[i-1]); 
        }
        cout<<"minConsecutive"<<minConsecutive<<" ";
        //circular
        int circulardiff=1440-x[x.size()-1]+x[0];

        return min(minConsecutive,circulardiff);

    }
};