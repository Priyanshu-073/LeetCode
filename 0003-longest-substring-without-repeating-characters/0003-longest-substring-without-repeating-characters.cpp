class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mlength = 0;
        int n = s.length();
        int l = 0;
        
        unordered_map<char, int> ct;
        
        for (int r = 0; r < n; r++) {
            ct[s[r]]++; 
            while (ct[s[r]] > 1) {
                ct[s[l]]--;
                l++; 
            }
            
            mlength = max(mlength, r - l + 1);
        }
        return mlength;
    }
};
