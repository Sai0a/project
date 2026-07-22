class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ch[128]={0};
        int maxlength=0;
        int left=0;
        for(int right=0;right<n;right++){
            char rightchar=s[right];
            ch[rightchar]++;

            while(ch[rightchar]>1){
                char leftchar=s[left];
                ch[leftchar]--;
                left++;
            }
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};