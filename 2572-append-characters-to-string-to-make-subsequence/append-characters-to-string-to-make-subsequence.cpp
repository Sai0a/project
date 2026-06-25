class Solution {
public:
    int appendCharacters(string s, string t) {
        int n=0,m=0;
        int n1=s.length();
        int n2=t.length();
        while(n<n1 && m<n2){
            if(s[n]==t[m]){
                m++;
            }
            n++;
        }
        return n2-m;

    }
};