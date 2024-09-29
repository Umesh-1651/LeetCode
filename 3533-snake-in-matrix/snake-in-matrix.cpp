class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x=0,y=0;
        for(auto i:commands){
            if( i == "UP") {x--;}
            else if( i == "DOWN") {x++;}
            else if(i == "RIGHT") {y++;}
            else y--;
        }
        return (x*n)+y;
    }
};