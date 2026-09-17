class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s="balloon";
       unordered_map<char,int> of; 
       unordered_map<char,int> tf; 
       int minV=INT_MAX;
       for(int i=0;i<s.size();i++){
        of[s[i]]++;
       }
       for(int i=0;i<text.size();i++){
        tf[text[i]]++;
       }
       for(int i=0;i<s.size();i++){
        if(tf.find(s[i])==tf.end() || of[s[i]]>tf[s[i]]){
            cout<<"notF"<<endl;
            return 0;
        }
        else{
            minV=min(minV,tf[s[i]]/of[s[i]]);
        }
       }

       return minV;

    }
};