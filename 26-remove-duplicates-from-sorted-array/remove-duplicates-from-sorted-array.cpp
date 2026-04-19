class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                continue;
            }
            i++;
            nums[i]=nums[j];
            count++;
        }
        return count+1;
    }
};