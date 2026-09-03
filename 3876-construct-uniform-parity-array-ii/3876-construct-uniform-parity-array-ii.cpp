class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=0;
        int e=0;
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                e++;
            }else{
                o++;
            }
        }

        if(nums1[0]%2==0 && o<=0 || nums1[0]%2!=0){
            return true;
        }
        else{
            return false;
        }
    }
};