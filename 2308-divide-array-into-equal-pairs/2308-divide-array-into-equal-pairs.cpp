class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans ^= nums[i];
        }
        if (ans != 0){
            return false;
        }
        vector<int> freq(501);
        for(int i : nums){
            freq[i]++;
        }
        for(int count : freq){
            if(count % 2 != 0) return false;
        }
        return true;

    }
};