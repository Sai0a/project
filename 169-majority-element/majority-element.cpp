class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int s=nums.size();
        for(int i=0;i<s;i++){
            mp[nums[i]]++;
        }
        int maxfrequency=INT_MIN;
        int maxelement =0;
        for(const auto &pair:mp){
            if(pair.second>maxfrequency){
                maxfrequency=pair.second;
                maxelement=pair.first;
            }

        }
        return maxelement;
    }
};