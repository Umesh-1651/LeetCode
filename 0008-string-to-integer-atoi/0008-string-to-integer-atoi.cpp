#include<bits/stdc++.h>
class Solution {
public:
    int myAtoi(string s) {
        string ans="";
        int pos=1,sw=0,sw2=0;
        for(auto i:s){
            if(i == '-'){
                if(sw==0 && sw2==0) {sw2=1;pos = -1;}
                else break;}
            else if(i == '+'){
                if(sw==0 && sw2==0) {sw2=1;pos = 1;}
                else break;}
            else if(i >= '0' && i <= '9') {sw=1;ans+=i;}
            else if(i == ' '){
                if(sw == 1 || sw2==1) break;
            } 
            else break;
        }
        int i=0;
        for(i=0;i<ans.size();i++){
            if(ans[i] != '0') break;
        }
        cout<<ans<<endl;
        ans = ans.substr(i);
        cout<<ans<<endl;
        if(ans == "") return 0;
        string lim = to_string(INT_MAX);
        cout<<lim<<endl;
        cout<<ans<<endl;
        if(ans.size() > lim.size()) ans = lim+"1";
        cout<<ans<<endl;
        long long a = stoll(ans);
        if(a > INT_MAX && pos==1) a = INT_MAX;
        else if(a>INT_MAX && pos==-1) a=INT_MIN; 
        return a*pos;
    }
};