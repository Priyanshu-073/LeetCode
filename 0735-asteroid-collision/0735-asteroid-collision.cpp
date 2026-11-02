class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack <int> st;
        vector<int> res;
        for(int i=0;i<n;i++){
            bool alive =true;
            while(!st.empty() && asteroids[i] < 0 &&st.top() > 0){
                
                if(st.top() < abs(asteroids[i])) st.pop();
                else if (st.top() == abs(asteroids[i])) {
                    st.pop();
                    alive = false;
                    break;
                }
                else {
                    alive = false;
                    break;
                }

            }
            if(alive) st.push(asteroids[i]);
            
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};