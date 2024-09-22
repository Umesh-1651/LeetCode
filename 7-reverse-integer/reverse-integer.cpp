class Solution {
public:
    int reverse(int x) {
    if(x<INT_MIN || x>INT_MAX-1) return 0;
    long int rem=0,rev=0;
    while(x!=0){
        rem=(x%10);
        rev=(rev*10) +rem;
        x/=10;
    }
    if(rev<INT_MIN || rev>INT_MAX-1) return 0;
    return rev;
    }
};