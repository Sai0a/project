class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;
        if(m==0 && n==0)return;
        if(m!=0){
            for(int i=0;i<m;i++){
                ans.push_back(nums1[i]);

            }
        }
        if(n!=0){
            for(int j=0;j<n;j++){
                ans.push_back(nums2[j]);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            nums1[i]=ans[i];
        }
    }
};