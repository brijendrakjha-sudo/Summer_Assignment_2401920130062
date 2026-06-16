class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cursum=0;
        int maxsum=INT_MIN;
        for(int st=0;st<n;st++){
            cursum+=nums[st];
            maxsum=max(cursum,maxsum);
            if(cursum<0)
            cursum=0;
            }
        return maxsum;       
    }
};