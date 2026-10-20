class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int ans=1;
        string repeated=a;
        while(repeated.size()<b.size()){
            repeated+=a;
            ans++;
        }
        if(repeated.find(b)!=string::npos)return ans;

        repeated+=a;
        ans++;
        if(repeated.find(b)!=string::npos)return ans;

        return -1;
    }
};