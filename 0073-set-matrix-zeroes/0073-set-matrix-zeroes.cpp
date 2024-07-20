class Solution {
public:
    void setrow(vector<vector<int>>& matrix,int i,int n)
    {
        for(int j=0;j<n;j++)
        {
             matrix[i][j]=0;
        }
    }
    void setcoloum(vector<vector<int>>& matrix,int j,int m)
    {
        for(int i=0;i<m;i++)
        {
          matrix[i][j]=0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
      int m=matrix.size();
        int n=matrix[0].size();
        vector<int> rowrecord;
        vector<int> colrecord;
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(matrix[i][j]==0)
               {
                  rowrecord.push_back(i);
                  colrecord.push_back(j);
               }
           }
       } 
        for(int i=0;i<rowrecord.size();i++){
          int rowno=rowrecord[i];  
           setrow(matrix,rowno,n);
        }
        
        for(int j=0;j<colrecord.size();j++){
          int colno=colrecord[j];  
           setcoloum(matrix,colno,m);
        }
           
                   
    }
};