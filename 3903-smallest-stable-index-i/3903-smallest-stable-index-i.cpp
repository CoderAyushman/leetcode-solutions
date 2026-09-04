class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=n;
        for(int i=0;i<n;i++){
            int mv=INT_MIN;
            int sv=INT_MAX;
            for(int j=0;j<=i;j++){
                mv=max(mv,nums[j]);
            }
            for(int j=i;j<n;j++){
                sv=min(sv,nums[j]);
            }
            if(mv!=INT_MIN && sv!=INT_MAX && mv-sv<=k){
            ans=min(ans,i);
            }
        }

        return ans==n?-1:ans;
    }
};