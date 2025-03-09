class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>m;
        int presum=0;
        m[0]=1;
        for(int i=0;i<n;i++){
            presum +=nums[i];
        if (m.find(presum - k) != m.end()) {
            count += m[presum - k]; 
        }
        m[presum] += 1;  
        }
        
    return count;
    }
};