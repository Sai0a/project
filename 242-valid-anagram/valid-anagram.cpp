class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp1;
        int n1=s.length();
        for(int i=0;i<n1;i++){
            mp1[s[i]]++;
        }
        unordered_map<int,int>mp2;
        int n2=t.length();
        for(int j=0;j<n2;j++){
            mp2[t[j]]++;
        }
        if(n1!=n2)return false;
        int size;
        if(n1>=n2){
            size=n1;

        }
        else{
            size=n2;
        }
        for(int i=0;i<size;i++){
            if(mp2[s[i]]!=mp1[s[i]]){
                return false;
            }
        }
        return true;
    }
};