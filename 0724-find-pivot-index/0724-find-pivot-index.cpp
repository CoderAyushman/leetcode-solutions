class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=size(nums);
        vector<int> pref(n,0);
        vector<int> suff(n,0);
        
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+nums[i+1];
        }

        for(int i=0;i<n;i++){
            cout<<suff[i]<<" "<<pref[i]<<endl;
            if(suff[i]==pref[i]){
                return i;
            }
        }
        return -1;
    }
};