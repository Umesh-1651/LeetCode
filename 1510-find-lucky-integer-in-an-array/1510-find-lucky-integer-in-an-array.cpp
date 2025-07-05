class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        int ans = INT_MIN;
        for(auto i:mp)
        {
            if(i.second == i.first) ans = max(ans,i.first);
        }
        return ans==INT_MIN?-1:ans;
    }
};