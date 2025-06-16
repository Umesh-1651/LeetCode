class Solution {
public:
    void traverse(vector<vector<int>> &adj,vector<int> &vis,int i){
        for(auto i:adj[i]){
            if(!vis[i]){
               vis[i] = 1;
               traverse(adj,vis,i);
        }
    }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
       
        int n = 0;
        vector<vector<int>> adj;
        for(int i=0;i<isConnected.size();i++){
            vector<int> a;
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j]) a.push_back(j);
            }
            adj.push_back(a);
        }
        vector<int> vis(isConnected.size());
        for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                vis[i] = 1;
                n++;
                traverse(adj,vis,i);
            }
        }
        for(int i=0;i<vis.size();i++)
        {
            cout<<i+1<<" "<<vis[i];        }
        return n;
    }
};