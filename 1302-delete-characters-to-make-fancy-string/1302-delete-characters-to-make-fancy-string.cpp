class Solution {
public:
    string makeFancyString(string s) {
        ios_base::sync_with_stdio(0);
        if(s.size()<3) return s;
        char a=s[0],b=s[1],c;
        string ans="";
        ans+=a;
        ans+=b;
        for(int i=2;i<s.size();i++){
            c = s[i];
            if(a == b && b == c) continue;
            else ans+=c;
            a=b;
            b=c;
        }
        return ans;
    }
};