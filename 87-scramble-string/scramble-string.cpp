class Solution {
public:
    unordered_map<string,bool>mp;
    bool isScramble(string s1, string s2) {

        if (s1 == s2)
            return true;
        string new_str = s1+s2;
        if(mp.find(new_str)!= mp.end()) return mp[new_str];
        int n = s1.length();

        for (int i = 1; i < n; i++) {

            // Swapped
            if (
                isScramble(s1.substr(0, i), s2.substr(n - i, i)) &&
                isScramble(s1.substr(i, n - i), s2.substr(0, n - i))
            ) {
                return mp[new_str] = true;
            }

            // Not swapped
            if (
                isScramble(s1.substr(0, i), s2.substr(0, i)) &&
                isScramble(s1.substr(i, n - i), s2.substr(i, n - i))
            ) {
                return mp[new_str] = true;
            }
        }

        return mp[new_str] = false;
    }
};