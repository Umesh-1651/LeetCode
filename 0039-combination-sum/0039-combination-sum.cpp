class Solution {
public:
    void pickNotPick(set<vector<int>> &ans,vector<int> cur,int n,int target,vector<int> &a,int sum,int i){
        if(sum == target) ans.insert(cur);
        if(i == n || sum>target) {
            return;
        }
        pickNotPick(ans,cur,n,target,a,sum,i+1);
        cur.push_back(a[i]);
        pickNotPick(ans,cur,n,target,a,sum+a[i],i);
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        set<vector<int>> ans;
        vector<int> cur;
        pickNotPick(ans,cur,a.size(),target,a,0,0);
        vector<vector<int>> ret;
        for(auto i:ans) ret.push_back(i);
        return ret;






    }
};