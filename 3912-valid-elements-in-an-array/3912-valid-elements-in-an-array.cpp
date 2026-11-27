class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool left=true;
            bool right=true;
            for(int j=0;j<i;j++){
                if(nums[j]>=nums[i]){
                    left=false;
                    break;
                }
            }
            for(int j=i+1;j<n;j++){
                if(nums[j]>=nums[i]){
                    right=false;
                    break;
                }
            }
            if(i==0||i==n-1||left||right){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};