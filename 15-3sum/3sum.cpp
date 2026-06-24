class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int f=nums[i];
            int target=-f;
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                if(nums[start]+nums[end]==target){
                    ans.push_back({f,nums[start],nums[end]});
                    while(start<end && nums[start]==nums[start+1])start++;
                    while(start<end && nums[end]==nums[end-1])end--;
                    end--;
                    start++;
                }
                else if(nums[start] + nums[end] > target){
                    end--;
                }
                else{
                    start++;
                }
            }
            
        }
        return ans;
    }
};