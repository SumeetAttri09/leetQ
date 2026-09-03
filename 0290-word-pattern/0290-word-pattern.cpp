class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        map<char, string> mp1;
        map<string, char> mp2;

        for (int i = 0; i < pattern.size(); i++) {

            char a = pattern[i];
            string b = words[i];

            
            if (mp1.find(a) != mp1.end()) {
                if (mp1[a] != b) {
                    return false;
                }
            }

            if (mp2.find(b) != mp2.end()) {
                if (mp2[b] != a) {
                    return false;
                }
            }

            mp1[a] = b;
            mp2[b] = a;
        }

        return true;
    }
};