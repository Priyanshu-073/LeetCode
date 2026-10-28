class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pvt=-1;
        
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]) {
                pvt=i;
                break;
            }
        }

        if (pvt == -1) {
            return srh(nums, target, 0, n - 1);
        }

        bool ans;
        if(target >= nums[0]){
             ans = srh(nums,target,0,pvt);
        }else{
            ans = srh(nums,target,pvt,n-1);
        } 
        return ans;   
    }

    bool srh(vector<int>& nums,int target,int l,int r){
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid] == target){
                return true;
            }
            else if(nums[mid] > target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }
};