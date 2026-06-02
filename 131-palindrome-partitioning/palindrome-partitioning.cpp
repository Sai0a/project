class Solution {
public:
    bool ispalin(string s){
        string s2=s;
        reverse(s.begin(),s.end());
        return s==s2;
    }
    void getallpart(string s,vector<string>&par, vector<vector<string>>&ans){
        if(s.size()==0){
            ans.push_back(par);
            return ;
        }

        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(ispalin(part)){
                par.push_back(part);
                getallpart(s.substr(i+1),par,ans);

                par.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>par;

        getallpart(s,par,ans);
        return ans;
    }
};