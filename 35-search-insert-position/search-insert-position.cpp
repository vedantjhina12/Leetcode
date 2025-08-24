class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k=0;
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]>=target){
            return i;
            }
        }
        return nums.size();
    }
};