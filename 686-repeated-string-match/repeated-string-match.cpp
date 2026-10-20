class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int ans=1;
        string r=a;
        while(r.size()<b.size()){
            r+=a;
            ans++;
        }
        if(r.find(b)!= string::npos)return ans;

        r+=a;
        ans++;
        if(r.find(b)!=string::npos)return ans;

        return -1;
    }
};