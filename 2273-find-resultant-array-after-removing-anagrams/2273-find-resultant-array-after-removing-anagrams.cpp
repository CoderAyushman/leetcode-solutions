class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> st;
        st.push_back(words[0]);
        int cr=0;
        for(int i=1;i<words.size();i++){
            string s1=st[cr];
            string s2=words[i];
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1!=s2){
                st.push_back(words[i]);
                cr++;
            }
        }
        // sort(st.begin(),st.end());
        
        // for(int i=0;i<st.size();i++){
        //     st.erase(unique(st.begin(),st.end()),st.end());
        // }
        

        return st;
    }
};