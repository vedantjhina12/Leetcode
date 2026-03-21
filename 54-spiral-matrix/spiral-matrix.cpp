class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;

        int startingrow=0;
        int startingcol=0;
        int endingrow=row-1;
        int endingcol=col-1;
        vector<int> ans;

        while(count<total){
            for(int i=startingcol;count<total&&i<=endingcol;i++){
                count++;
                ans.push_back(matrix[startingrow][i]);

            }
                startingrow++;

            for(int i=startingrow;count<total&&i<=endingrow;i++){
                count++;
                ans.push_back(matrix[i][endingcol]);
            }
                endingcol--;

            for(int i=endingcol;count<total&&i>=startingcol;i--){
                count++;
                ans.push_back(matrix[endingrow][i]);

            }
                endingrow--;
            for(int i=endingrow;count<total&&i>=startingrow;i--){
                count++;
                ans.push_back(matrix[i][startingcol]);
            }
                startingcol++;
        }
        return ans;
    }
};