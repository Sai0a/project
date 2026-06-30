class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int max=n/2;
        int ans;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>max){
                ans=nums[i];
            }
        }
        return ans;
    }
};