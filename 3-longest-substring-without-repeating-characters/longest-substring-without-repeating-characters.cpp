class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int left=0;
        int maxlength=0;
        int ch[128]={0};
        for(int right=0;right<n;right++){
            char currentchar=s[right];
            ch[currentchar]++;

            while(ch[currentchar]>1){
                char leftchar=s[left];
                ch[leftchar]--;
                left++;
            }


            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};