class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorResult=nums.size();
        for(int i=0;i<nums.size();i++){
            xorResult^=i;
            xorResult^=nums[i];
        }
        return xorResult;
    }
};