class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        map<int, int>mpp;
        vector<int> ans;
        for(int i=0; i<n; i++){
            mpp[nums1[i]]++;
        }

        for(int j=0; j<m; j++){
            if(mpp[nums2[j]]>=1){
                ans.push_back(nums2[j]);
                mpp[nums2[j]]--;
            }
        }
        return ans;
    }
};