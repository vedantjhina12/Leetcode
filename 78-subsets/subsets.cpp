class Solution {
public:
    void solve(vector<vector<int>>& output,vector<int> nums,vector<int> ans,int index){

        if(index>=nums.size()){
            output.push_back(ans);
            return ;
        }
        solve(output,nums,ans,index+1);
        ans.push_back(nums[index]);
        solve(output,nums,ans,index+1);

    } 
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> output;
        vector<int> ans;
        solve(output,nums,ans,index);

        return output;
    }
};