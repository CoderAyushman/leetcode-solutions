class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> vc;
        int n= intervals.size();
        int st1=intervals[0][0];
        int en1=intervals[0][1];
        for(int i=1;i<n;i++){
            int st2=intervals[i][0];
            int en2=intervals[i][1];

            if(en1>=st2){
                en1=max(en1,en2);
                continue;
            }
            vc.push_back({st1,en1});
            st1=st2;
            en1=en2;
        }
        vc.push_back({st1,en1});

        return vc;
    }
};