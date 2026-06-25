class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        int n=p.size();
        vector<pair<int,double>>ans;
        for(int i=0;i<n;i++){
            double time=(double)(target-p[i])/s[i];
            ans.push_back({p[i],time});
        }
        sort(ans.rbegin(),ans.rend());
        int fleet=0;
        double maxtime=0.0;
        for(auto &u:ans){
            double time=u.second;
            if(time>maxtime){
                fleet++;
                maxtime=time;
            }
        }
        return fleet;
    }
};