class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n=prices.size();

        for(int i=0;i<n;i++){
            while(!st.empty() && prices[i] <= prices[st.top()]){
                int res=st.top();
                st.pop();
                prices[res] -= prices[i];
            }
            st.push(i);
        }
        return prices;
    }
};