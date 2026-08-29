class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        map<char,int>mpp;
        for(int i=0; i<n; i++){
            mpp[s[i]]++;
        }
        for(int j=0; j<s.size(); j++){
            if(mpp[s[j]]==1) return j;
        }
        return -1;
    }
};