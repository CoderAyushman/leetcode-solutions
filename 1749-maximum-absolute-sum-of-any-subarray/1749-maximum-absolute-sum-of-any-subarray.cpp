class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int bmi=nums[0];
        int bma=nums[0];
        int ans=abs(nums[0]);
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=bmi+nums[i];
            int v3=bma+nums[i];
            bmi=min(v1,min(v2,v3));
            bma=max(v1,max(v2,v3));
            ans=max(max(abs(bmi),bma),ans);
        }
        return abs(ans);
    }
};