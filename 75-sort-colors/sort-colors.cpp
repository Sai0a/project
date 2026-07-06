class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        for(int j:nums){
            mp[j]++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            while(mp[nums[i]]>0){
                ans.push_back(nums[i]);
                mp[nums[i]]--;

            }
        }
        
    }
};