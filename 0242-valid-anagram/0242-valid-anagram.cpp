class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        map<char,int>mpp1,mpp2;
        int i=0;
        while(i<n){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
            i++;
        }
        return mpp1==mpp2;
    }
};


