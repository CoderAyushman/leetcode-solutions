class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int ln=0;
        int hn=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]>=maxi){
                hn=i;
                maxi=max(maxi,nums[i]);
            }
            if(nums[i]<=mini){
                ln=i;
                mini=min(mini,nums[i]);
            }
        }
        cout<<ln<<" "<<hn<<endl;
        cout<<mini<<" "<<maxi<<endl;
        int z=max(ln,hn)+1;
        int y=n-min(ln,hn);
        int r=min(ln,hn)+1+n-max(hn,ln);
        int ans=min(r,min(y,z));
        cout<<r<<endl;
        return ans;
    }
};