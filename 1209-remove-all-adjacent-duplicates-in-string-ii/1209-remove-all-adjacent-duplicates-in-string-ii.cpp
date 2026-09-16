class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string ans="";
        int n=s.size();
        st.push({s[0],1});
        for(int i=1;i<n;i++){
            if(st.empty() || st.top().first!=s[i]){
                st.push({s[i],1});
            }
            else if(st.top().first==s[i] && st.top().second<k-1){
                st.top().second++;
                continue;
            }
            else{
                st.pop();
            }
        }

        while(!st.empty()){
            while(st.top().second>0){
            ans.push_back(st.top().first);
            st.top().second--;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};