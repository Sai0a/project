class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n-1;i++){
            int n1=arr[i];
            int max=INT_MIN;
            for(int j=i+1;j<n;j++){
                
                if(arr[j]> max){
                    max=arr[j];
                }
            }
            ans[i]=max;
            
        }
        return ans;
    }
};