class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int s1=grid.size();
        unordered_set<int>m;
        vector<int>ans;
        for(int i=0;i<s1;i++){
            for(int j=0;j<s1;j++){
                if(m.find(grid[i][j])!=m.end()){
                    ans.push_back(grid[i][j]);
                }
                m.insert(grid[i][j]);
            }
        }
        int s2=s1*s1;
        for(int j=1;j<=s2;j++){
            if(m.find(j)==m.end()){
                ans.push_back(j);
            }
        }
        return ans;

        
    }
};