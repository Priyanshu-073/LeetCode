class Solution {
public:
    int xorOperation(int n, int start) {
        // vector<int> ans;
        int ans = 0;
        for(int i=0;i<n;i++){
            // ans.push_back(start + (2 * i));
            ans ^= start + (2 * i);
        }
        return ans;
        
        
    }
};