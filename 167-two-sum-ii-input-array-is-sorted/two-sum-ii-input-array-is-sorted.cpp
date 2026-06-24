class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int com=target-nums[i];
            if(mp.count(com)){
                return {mp[com]+1,i+1};
            }
            mp[nums[i]]=i;
        }
        return {};
       
        return {};
    }
};