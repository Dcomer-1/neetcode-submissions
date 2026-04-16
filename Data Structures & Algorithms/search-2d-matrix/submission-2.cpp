class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for (int i = 0; i < matrix.size(); i++){
            int l = 0;
            int r = matrix.size();
            int max = matrix[i][matrix[i].size()-1];
            if(target > max){
                continue;
            }else{
                while( l<=r ){
                    int mid = (l+r)/2;
                    if(matrix[i][mid] == target){
                        return true;
                    }else if(matrix[i][mid] < target){
                        l = mid+1;
                    }else if(matrix[i][mid] > target){
                        r = mid-1;
                    }
                }
                
            }
        }
        return false;
    }
};
