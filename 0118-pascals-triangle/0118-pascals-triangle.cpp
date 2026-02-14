class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({1});

        for(int i=0; i<numRows-1; i++){
            vector<int> tempVector = {0};
            tempVector.insert(tempVector.end(),result.back().begin(),result.back().end());
            tempVector.push_back({0});
            vector<int> row;
            for(int j=0; j<tempVector.size()-1; j++){
                row.push_back(tempVector[j] + tempVector[j+1]);
            }
            result.push_back(row);
        }
        return result;
    }
};