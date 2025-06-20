class Solution {
public:
    int maxDifference(string s) {
        int e=INT_MAX,o=0;
        unordered_map<int,int> mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second%2==0 && i.second < e) e = i.second;
            else if(i.second%2!=0 && i.second>o) o = i.second;
        }
        cout<<e<<" "<<o<<endl;
        return o-e;
    }
};