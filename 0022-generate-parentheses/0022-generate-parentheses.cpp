class Solution {
public:
    void gen(set<string>& ans, string s, int n, int rem, int cnt,int b) {
        if (s.size() == 2 * n) {
            ans.insert(s);
            return;
        }
        if(cnt<n) gen(ans, s + '(', n, rem, cnt + 1,b+1);
        
        if(b!=0|| (cnt == n && rem <n)){
            gen(ans, s + ')', n, rem+1, cnt,b-1);
        }
        

    }
    vector<string> generateParenthesis(int n) {
        set<string> ans;
        string s = "";
        gen(ans, s, n, 0, 0,0);
        vector<string> ans1;
        for(auto i:ans){
            ans1.push_back(i);
        }
        return ans1;
    }
};