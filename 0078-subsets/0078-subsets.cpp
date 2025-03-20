class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        potans(nums,0,res,sub);
        return res;
    }
    void potans(vector<int>& nums, int index,vector<vector<int>>& res, vector<int>& sub ){
        if(index==nums.size()){
            res.push_back(sub);
            return ;
        }
        sub.push_back(nums[index]);
        potans(nums,index+1,res,sub);
        sub.pop_back();
        potans(nums,index+1,res,sub);

    }
};