class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

    // {
    //     int n=nums.size();
    //     int ans=0;
    //     int pot=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]==1){
    //             pot++;
    //         }

    //         if(nums[i]==0){
    //             if(pot>ans){
    //                 ans=pot;
    //             }
    //             pot=0;
    //         }
    //     }
    //     return ans;

    // }
    
    int left=0, maxL=0, zero=0;
    for(int right = 0 ; right <nums.size(); right++){
        if(nums[right] == 0){
            zero++;
        }
        while(zero>k){
                if(nums[left] == 0){
                    zero--;
                }
                left++;
        }
        maxL=max(maxL,right - left + 1);
    }
    return maxL;

    }
};