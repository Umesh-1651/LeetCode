class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = INT_MIN;
        int cnt=0;
        int retcnt=0;
        for(auto i:nums){
            if(i > mx){
                cnt=1;
                mx = i;
                retcnt =1 ;
            }
            else if(i == mx){
                cnt++;
            }
            else if(i != mx){
                retcnt = max(cnt,retcnt);
                cnt=0;
            }
        }
        return  max(cnt,retcnt);
    }
};