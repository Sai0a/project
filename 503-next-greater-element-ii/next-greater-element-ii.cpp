class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int size=nums.size();
        vector<int>ans(size,-1);
        stack<int>s;
      
        for(int i=2*size-1;i>=0;i--){
            int idx=i%size;
            while(s.size()>0 && s.top()<=nums[idx]){
                s.pop();
            }
            ans[idx] = s.empty() ? -1 : s.top();
            s.push(nums[idx]);
        }
        return ans;
        
    }
};