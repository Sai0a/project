class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxright=-1;
        int current;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            current=arr[i];
            ans[i]=maxright;
            maxright=max(maxright,current);
        }
        return ans;
    }
};