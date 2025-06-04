class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index=0;
        int maxcount=0;
        // vector<vector<int>> ans;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
               if(mat[i][j]==1){
                count++;
               }
            }
        if(count>maxcount){
            maxcount=count;
            index=i;
        }
    }
    return {index,maxcount};
    }
};