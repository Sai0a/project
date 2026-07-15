class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int min=n/2;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans;
        for(auto &p:mp){
            if(p.second>min){
                ans= p.first;

            }
        }
        return ans;
    }
};