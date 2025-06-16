class Solution {
public:

    long long numberOfWays(string s) {
        vector<long long> left(s.size(),0);
        vector<long long> right(s.size(),0);
        long long z=0,o=0;
        //constructing left
        for(long long i=0;i<s.size();i++){
            if(s[i] =='0'){
                 z++;
                 left[i] = o;
            }
            else {
                 o++;
                 left[i] = z;
            }
        }
        z=0,o=0;
        for(long long i=s.size()-1;i>=0;i--){
            if(s[i] =='0'){
                 z++;
                 right[i] = o;
            }
            else {
                 o++;
                 right[i] = z;
            }
        }

        long long ans=0;
        for(int i=0;i<s.size();i++){
            
                ans+= left[i]*right[i];
           
        }
        return ans;
    }
};