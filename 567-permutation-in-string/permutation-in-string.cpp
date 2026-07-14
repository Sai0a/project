class Solution {
public:
    bool isfreqsame(int freq1[26],int freq2[26]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
        int freq1[26]={0};
        int freq2[26]={0};
        int n1=s1.length();
        int n2=s2.length();
        if(n1>n2)return false;
        for(int i=0;i<n1;i++){
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<n1;i++){
            freq2[s2[i]-'a']++;
        }
        if(isfreqsame(freq1,freq2)){
            return true;

        }

        for(int j=n1;j<n2;j++){
            freq2[s2[j]-'a']++;
            freq2[s2[j-n1]-'a']--;
            if(isfreqsame(freq1,freq2)){
                return true;
            }
        }
        return false;


    }
};