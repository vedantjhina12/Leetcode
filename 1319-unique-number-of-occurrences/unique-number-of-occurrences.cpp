class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count=1;
        vector<int> freq;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                count++;
            }else{
                freq.push_back(count);
                count=1;
            }
        }
        freq.push_back(count);
        sort(freq.begin(),freq.end());
        for(int i=1;i<freq.size();i++){
            if(freq[i]==freq[i-1]){
                return false;
            }
        }
        return true;
    }
};