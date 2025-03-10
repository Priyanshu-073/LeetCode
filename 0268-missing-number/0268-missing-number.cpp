class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int tsum=(n*(n+1))/2;
        int ac=accumulate(nums.begin(),nums.end(),0);
        return tsum-ac;
    }
};