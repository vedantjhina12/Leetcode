class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        for(int i=0;i<m;i++){
            // if(nums1[i]!=0){
                ans.push_back(nums1[i]);
            // }
        }
        for(int j=0;j<n;j++){
            // if(nums2[j]!=0){
                ans.push_back(nums2[j]);
            // }
        }
        sort(ans.begin(),ans.end());
        nums1=ans;
    }
};