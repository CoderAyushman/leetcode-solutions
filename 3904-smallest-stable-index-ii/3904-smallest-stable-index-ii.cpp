class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    int n=nums.size();
     vector<long long> suff(n,0);
     vector<long long> pref(n,0);
    int miv=INT_MAX;
    int mav=INT_MIN;
    int ans=n;
     for(int i=n-1;i>=0;i--){
        miv=min(miv,nums[i]);
        suff[i]=miv;
     }
     for(int i=0;i<n;i++){
        mav=max(mav,nums[i]);
        pref[i]=mav;
     }

     for(int i=0;i<n;i++){
        long long res=pref[i]-suff[i];
        // cout<<pref[i]<<" "<<suff[i]<<endl;
        if(res<=k){
            ans=min(ans,i);
        }
     }

     return ans==n?-1:ans;
    }
};