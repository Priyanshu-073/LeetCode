class Solution {
public: 
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int mark=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                mark=i;
                break;
            }
        }
        int lo=0;
        int hi=mark-1;
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid] == target){
                ans=mid;
                return ans;
            }else if(nums[mid] >target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }

        int low=mark;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid] == target){
                ans=mid;
                return ans;
            }else if(nums[mid] >target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return ans;
    }  
};  