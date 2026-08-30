class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        map<char,int>mp;
        string ans;
        int i=0;
        while(i<n){
            mp[s[i]]++;
            i++;
        }
        vector<pair<char,int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].second; j++){
                ans.push_back(v[i].first);
            }
        }
        return ans;
    }
};