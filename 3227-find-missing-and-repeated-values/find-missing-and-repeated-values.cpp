class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_set<int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(mp.find(grid[i][j])!=mp.end()){
                    ans.push_back(grid[i][j]);

                }
                mp.insert(grid[i][j]);
            }
        }
        int size=n*n;
        for(int i=1;i<=size;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
        
    }
};