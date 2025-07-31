class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedarray=nums1;
        mergedarray.insert(mergedarray.end(),nums2.begin(),nums2.end());
        sort(mergedarray.begin(),mergedarray.end());

        int n=mergedarray.size(); 
            if(n%2==0){
                return (mergedarray[n/2]+mergedarray[(n/2)-1])/2.0;
            }
            else
            return mergedarray[n/2];
        
    }
};