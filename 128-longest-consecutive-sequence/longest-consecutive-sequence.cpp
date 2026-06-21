class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int longest=1;
        int shortest=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]-1==shortest){
                count++;
                shortest=nums[i];
            }
            if(nums[i]!=shortest){
                count=1;
                shortest=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;

    }
};