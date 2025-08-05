class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int st =0,hp=0,hp2=0,hp3=0,n = nums.size();
        int i=1;
        while(i<n){
            
            if(nums[i] < nums[i-1]) {
                if(st!=0) break;
                else return false;
            }
            else if(nums[i] == nums[i-1]) return false;
            else {
                st= 1;
                i++;
            }
        }
        while(st!=0 && i<n){
            if(nums[i] > nums[i-1]) {
                if(hp!=0) break;
                else return false;
            }
             else if(nums[i] == nums[i-1]) return false;
            else {
                hp= 1;
                i++;
            }
        }
        while(hp!=0 && i<n){
           if(nums[i] <= nums[i-1]) {
                return false;
            }

           else {hp=2;i++;}
        }
        cout<<hp<<endl;
        return hp == 2;
    }
};