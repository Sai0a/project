class Solution {
public:
    string removeStars(string s) {
        int n =s.length();
        stack<char>st;
        string ans;
        for(char c:s){
            if(!st.empty() && c=='*'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};