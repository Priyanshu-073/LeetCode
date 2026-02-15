class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        
        bool firstRowZero = false;
        bool firstColZero = false;

        for(int i=0; i<colSize; i++){
            if(matrix[0][i] == 0){
                firstRowZero = true;
            }
        }

        for(int i=0; i<rowSize; i++){
            if(matrix[i][0] == 0){
                firstColZero = true;
            }
        }

        for(int row=1; row<rowSize; row++){
            for(int col = 1; col< colSize; col++){
                if(matrix[row][col] == 0){
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }

        for(int row=1; row<rowSize; row++){
            for(int col = 1; col< colSize; col++){
                if(matrix[row][0] == 0 || matrix[0][col] == 0){
                    matrix[row][col] = 0;
                    // matrix[col][row] = 0;
                }
            }
        }

        if(firstRowZero){
            for(int i=0; i<colSize; i++){
                matrix[0][i] = 0;
            }
        }

        if(firstColZero){
            for(int i=0; i<rowSize; i++){
                matrix[i][0] = 0;
            }
            
        }

        cout<<firstRowZero<<endl;
        cout<<firstColZero<<endl;
         
    }
};