class Solution {
public:
    char findTheDifference(string s, string t) {
        int xorsum=0;
        for(int i=0;i<s.size();i++){
            xorsum=xorsum^s[i];
        }
        for(int i=0;i<t.size();i++){
            xorsum=xorsum^t[i];
        }

        return char(xorsum);
    }
};