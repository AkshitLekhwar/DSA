class Solution {
public:
    int countCommas(int n) {
        if(n>999){
            n=n-999;
            return n;
        }
        return 0;
    }
};