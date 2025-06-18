class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k){
        vector<vector<int>> fans;
        vector<int> ans;
        int cnt=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-3;i+=3){
            if((nums[i+1]-nums[i] <=k) &&(nums[i+2]-nums[i+1] <=k) && (nums[i+2]-nums[i] <=k)){
                ans.push_back(nums[i]);
                ans.push_back(nums[i+1]);
                ans.push_back(nums[i+2]);
                cnt+=3;
                fans.push_back(ans);
            }
            ans.clear();
        }
        if(cnt != n) fans.clear();
        return fans;
    }
};