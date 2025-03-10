class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int res;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;

                res=max(count,res);
                }else{
                    count=0;
                }
        }
        return res;
    }
};