class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> a;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            a[c]++;
        }
        return mp==a;
    }
};
