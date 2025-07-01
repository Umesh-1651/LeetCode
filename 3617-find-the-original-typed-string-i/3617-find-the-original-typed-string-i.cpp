class Solution {
public:
    int possibleStringCount(string word) {
        int consRep = 0 ;
        for(int i=1;i<word.size();i++){
            if(word[i] == word[i-1]){
                consRep++;
            }
        }
        return consRep+1;
    }
};