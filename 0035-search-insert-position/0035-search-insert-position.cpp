class Solution {
public:
    int bs(vector<int> &nums,int t){
        int l =0,h= nums.size()-1;
        int ans=-1;
        while(h>=l){
            int m = l+((h-l)/2);
            if(nums[m] <= t) {ans=m;l=m+1;}
            else h=m-1;
        }
        return ans;

    }
    int searchInsert(vector<int>& nums, int target) {
        int ans = bs(nums,target);
        if(ans == -1) return 0;
        else if(nums[ans]<target) return ans+1;
        return ans;
    }
};