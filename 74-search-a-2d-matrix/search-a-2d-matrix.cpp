class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size();
      int n=matrix[0].size();

      int l=0,r=m*n-1;

      while(l<=r){
        int m=l+(r-l)/2;
        int mmidelement=matrix[m/n][m%n];

        if(mmidelement==target){
            return true;
        }
        else if(mmidelement<target){
                l=m+1;
        }else{
            r=m-1;
        }
      }  
      return false;
    }
};