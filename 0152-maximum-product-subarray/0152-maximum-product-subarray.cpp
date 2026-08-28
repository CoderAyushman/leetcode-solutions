class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int bmaxe = nums[0];
        int bmine = nums[0];
        int n = nums.size();
        int maxV=INT_MIN;
        int p=1;
        for (int i = 1; i < n; i++) {
            int v1 = bmaxe * nums[i];
            int v2 = nums[i];
            int v3= bmine*nums[i];
            bmaxe = max(v2,max(v1,v3));
            bmine = min(v2,min(v1,v3));
        
            ans = max(ans,bmaxe);
        }
        return ans;
    }
};