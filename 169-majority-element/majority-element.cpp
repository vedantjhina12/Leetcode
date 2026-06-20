class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele;
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int check=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                check++;
            }
        }
        if(check>nums.size()/2){
            return ele;
        }
        return -1;
    }
};