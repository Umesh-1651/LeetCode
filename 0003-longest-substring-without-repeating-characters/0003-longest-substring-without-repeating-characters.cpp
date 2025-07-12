class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int left=0,right=0;
        int cnt=0,ans=0;
        while(right<n){
            mp[s[right]]++;
            cnt++;
            while(left<right && mp[s[right]] == 2){
                mp[s[left]]--;
                left++;
                cnt--;
            }
            right++;
            ans = max(ans,cnt);
        }
        return ans;
    }
};