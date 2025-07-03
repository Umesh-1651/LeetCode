class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        string c = "";
        while(s.size() < k){
            for(auto i:s){
                c+=i+1; 
            }
            s+=c;
            c="";
        }
        cout<<s<<endl;
        return s[k-1];
    }
};