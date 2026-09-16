class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
        vector<int> res(n, -1);
        for(int i=n-2;i>=0;i--){
        s.push(nums[i]);
        }
        for (int i = n - 1; i >= 0; i--) {
            while(!s.empty()){
                if(s.top()>nums[i]){
                    res[i]=s.top();
                    break;
                }
                s.pop();
            }
            s.push(nums[i]);
        }
        return res;
    }
};