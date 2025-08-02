class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> cur;
        vector<int> prev={1};
        ans.push_back(prev);
        for(int i=1;i<numRows;i++){
            cur.push_back(prev[0]);
            for(int j=0;j<prev.size()-1;j++){
                cur.push_back(prev[j]+prev[j+1]);
            }
             cur.push_back(prev[prev.size()-1]);
             prev = cur;
             ans.push_back(cur);
             cur={};
        }
        return ans;
    }
};