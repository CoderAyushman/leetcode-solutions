class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=0;
        int e=0;
        int n=nums1.size();
        // sort(nums1.begin(),nums1.end());
        int m=INT_MAX;
        for(int i=0;i<n;i++){
            m=min(m,nums1[i]);
            if(nums1[i]%2==0){
                e++;
            }else{
                o++;
            }
        }

        if(m%2==0 && o<=0 || m%2!=0){
            return true;
        }
        else{
            return false;
        }
    }
};