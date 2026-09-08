class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>> updatedIntervals;
        vector<vector<int>> ans;
        bool isp=false;
        for(int i=0;i<n;i++){
            if(newInterval[0]<=intervals[i][0] && isp==false){
                updatedIntervals.push_back(newInterval);
                isp=true;
            }
            updatedIntervals.push_back(intervals[i]);
        }
        if(isp==false){
             updatedIntervals.push_back(newInterval);
        }

        int s1=updatedIntervals[0][0];
        int e1=updatedIntervals[0][1];

        for(int i=1;i<n+1;i++){
            int s2=updatedIntervals[i][0];
            int e2=updatedIntervals[i][1];

            if(e1>=s2){
               e1=max(e1,e2);
               continue;
            }

            ans.push_back({s1,e1});
            s1=updatedIntervals[i][0];
            e1=updatedIntervals[i][1];
        }
        ans.push_back({s1,e1});
        return ans;
    }
};