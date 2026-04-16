class Solution {
public:
    void solve(vector<int> &nums,vector<vector<int>> &ans,vector<int> output,int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        int next=index+1;
        while(next<nums.size()&&nums[next]==nums[index]){
            next++;
        }
        solve(nums,ans,output,next);

        int element=nums[index];
        output.push_back(element);
        solve(nums,ans,output,index+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        sort(nums.begin(), nums.end());
        solve(nums,ans,output,index);
        return ans;
    }
};