class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1=s.size();
        int s2=t.size();
        if(s1!=s2)return false;
        unordered_map<int,int>mp1;
        for(int i=0;i<s1;i++){
            mp1[s[i]]++;
        }

        unordered_map<int,int>mp2;
        for(int i=0;i<s2;i++){
            mp2[t[i]]++;

        }
        int count=0;
        for(int i=0;i<s1;i++){
            if(mp1[s[i]]==mp2[s[i]]){
                count++;
            }
        }
        if(count ==s1){
            return true;
        }
        return false;

    }
};