class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int startRow=0;
        int endRow=matrix.size()-1;
        int startColumn=0;
        int endColumn=matrix[0].size()-1;
        vector<int> list;
        while(startRow<=endRow&&startColumn<=endColumn){
            //first row
            for(int i=startColumn;i<=endColumn;i++){
                list.push_back(matrix[startRow][i]);
            }++startRow;
            //last column
            for(int i=startRow;i<=endRow;i++){
                list.push_back(matrix[i][endColumn]);
            }--endColumn;
            //last row
            if(startRow<=endRow){
                for(int i=endColumn;i>=startColumn;i--){
                list.push_back(matrix[endRow][i]);
                }--endRow;
            }
            //first column
            if(startColumn<=endColumn){
                for(int i=endRow;i>=startRow;i--){
                list.push_back(matrix[i][startColumn]);
                }++startColumn;
            }   
        }
        return list;   
    }
};