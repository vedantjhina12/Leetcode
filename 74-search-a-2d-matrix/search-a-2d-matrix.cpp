class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int rowlength=matrix.size();
        int columnlength=matrix[0].size();
        int end=rowlength*columnlength-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(matrix[mid/columnlength][mid%columnlength]==target){
                return true; 
            }
            if(matrix[mid/columnlength][mid%columnlength]>target){

                end=mid-1;
            } 
            if(matrix[mid/columnlength][mid%columnlength]<target){
                start=mid+1;

            } 

        }
        return false;
    }
};